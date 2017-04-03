#include "Unit.h"

Unit::Unit(std::string unitClass, PhysicalAbility* physicalAbility, PhysicalState* physicalState):
    unitClass(unitClass), physicalAbility(physicalAbility), physicalState(physicalState) {}
Unit::~Unit() {
    delete physicalAbility;
    delete physicalState;
}

PhysicalAbility* Unit::getPhysicalAbility() const {
    return physicalAbility;
}

PhysicalState* Unit::getPhysicalState() const {
    return physicalState;
}

const std::string& Unit::getUnitClass() const {
    return unitClass;
}

void Unit::setPhysicalAbility(PhysicalAbility* newPhysicalAbility) {
    if ( this->physicalAbility != NULL ) {
        delete this->physicalAbility;
    }
    this->physicalAbility = newPhysicalAbility;
}

void Unit::setPhysicalState(PhysicalState* newPhysicalState) {
    if ( this->physicalState != NULL ) {
        delete this->physicalState;
    }
    this->physicalState = newPhysicalState;
}

void Unit::setUnitClass(std::string newUnitClass) {
    unitClass = newUnitClass;
}

void Unit::attack(Unit* enemy) {
    this->physicalState->isAlive();
    this->physicalAbility->action(enemy);
}

void Unit::counterAttack(Unit* enemy) {
    this->physicalState->isAlive();
    this->physicalAbility->counterAction(enemy);
}

std::ostream& operator<<(std::ostream& out, Unit* unit) {
    out 
        << "Unit class: " << unit->getUnitClass() << "\n"
        << "   HP: " << unit->getPhysicalState()->getFeature() << "/" << unit->getPhysicalState()->getMaxFeature() << "\n"
        << "   Physical damage: " << unit->getPhysicalAbility()->getPower()
        << std::endl;

    return out;
}
