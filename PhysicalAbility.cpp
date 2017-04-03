#include "PhysicalAbility.h"

PhysicalAbility::PhysicalAbility(Unit* owner, int power): Ability(power) {
	this->owner = owner;
}
PhysicalAbility::~PhysicalAbility() {}
