#include "VampireAbility.h"

VampireAbility::VampireAbility(Unit* owner, int power): PhysicalAbility(owner, power) {}
VampireAbility::~VampireAbility() {}

void VampireAbility::action(Unit* target) {
	target->getPhysicalState()->isAlive();
	target->getPhysicalState()->isUnderAttack(power);
	owner->getPhysicalState()->isHealed(power/3);
	if ( target->getPhysicalState()->getFeature() < 30
	&& target->getUnitClass() != "Vampire"
	&& target->getUnitClass() != "Werewolf"
	&& target->getUnitClass() != "Werewolf(wolf)" ) {
		infect(target);
	}
}

void VampireAbility::counterAction(Unit* target) {
	target->getPhysicalState()->isAlive();
	if ( target->getUnitClass() != "Rogue" ) {
		target->getPhysicalState()->isUnderAttack(power/2);
		owner->getPhysicalState()->isHealed(power/6);
		if ( target->getUnitClass() != "Vampire" &&
			target->getUnitClass() != "Werewolf" &&
			target->getUnitClass() != "Werewolf(wolf)") {
			if ( target->getPhysicalState()->getFeature() < 30 ) {
				infect(target);
			}
		}
	}
}

void VampireAbility::infect(Unit* target) {
	if ( target->getUnitClass() != "Vampire" && target->getUnitClass() != "Werewolf" && target->getUnitClass() != "Werewolf(wolf)" ) {
		target->setPhysicalAbility(new VampireAbility(target, 42));
		target->setPhysicalState(new Undead(350));
		target->setUnitClass("Vampire");
	}
}
