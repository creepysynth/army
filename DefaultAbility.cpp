#include "DefaultAbility.h"

DefaultAbility::DefaultAbility(Unit* owner, int power): PhysicalAbility(owner, power) {}
DefaultAbility::~DefaultAbility() {}

void DefaultAbility::action(Unit* target) {
	target->getPhysicalState()->isAlive();
	target->getPhysicalState()->isUnderAttack(power);
}

void DefaultAbility::counterAction(Unit* target) {
	target->getPhysicalState()->isAlive();	
	if ( target->getUnitClass() != "Rogue" ) {
		target->getPhysicalState()->isUnderAttack(power/2);
	}
}
