#ifndef UNIT_H
#define UNIT_H

#include "PhysicalAbility.h"
#include "PhysicalState.h"

class Unit {
protected:
    std::string unitClass;
    PhysicalAbility* physicalAbility;
    PhysicalState* physicalState;
public:
    Unit(std::string unitClass, PhysicalAbility* physicalAbility, PhysicalState* physicalState);
    virtual ~Unit();

    PhysicalAbility* getPhysicalAbility() const;
    PhysicalState* getPhysicalState() const;
    const std::string& getUnitClass() const;    
    void setPhysicalAbility(PhysicalAbility* newPhysicalAbility);
    void setPhysicalState(PhysicalState* newPhysicalState);
    void setUnitClass(std::string newUnitClass);

    virtual void attack(Unit* enemy);
    virtual void counterAttack(Unit * enemy);
};

std::ostream& operator<<(std::ostream& out, Unit* unit);

#endif
