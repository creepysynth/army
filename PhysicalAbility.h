#ifndef PHYSICALABILITY_H
#define PHYSICALABILITY_H

#include "Ability.h"

class PhysicalAbility: public Ability {
protected:
	Unit* owner;
public:
	PhysicalAbility(Unit* owner, int power);
	virtual ~PhysicalAbility();

	virtual void action(Unit* target) = 0;
	virtual void counterAction(Unit* target) = 0;
};

#endif
