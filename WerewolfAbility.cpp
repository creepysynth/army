#include "WerewolfAbility.h"

WerewolfAbility::WerewolfAbility(Unit* owner, int power): PhysicalAbility(owner, power) {}
WerewolfAbility::~WerewolfAbility() {}

void WerewolfAbility::action(Unit* target) {
	target->getPhysicalState()->isAlive();
	target->getPhysicalState()->isUnderAttack(power);
	if ( target->getPhysicalState()->getFeature() < 30 ) {		
		infect(target);
	}
}
	
void WerewolfAbility::counterAction(Unit* target) {
	target->getPhysicalState()->isAlive();
	if ( target->getUnitClass() != "Rogue" ) {
		target->getPhysicalState()->isUnderAttack(power/2);
		if ( target->getPhysicalState()->getFeature() < 30 ) {
			infect(target);
		}
	}
}
	
void WerewolfAbility::infect(Unit* target) {
	if ( target->getUnitClass() != "Vampire" && target->getUnitClass() != "Werewolf(wolf)" ) {
		target->setPhysicalAbility(new WerewolfAbility(target, target->getPhysicalAbility()->getPower()));
		target->setUnitClass("Werewolf");
	}
}
