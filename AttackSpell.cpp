#include "AttackSpell.h"

AttackSpell::AttackSpell(SpellCaster* owner, int power, int manaConsumption): MagicalAbility(owner, power, manaConsumption) {}
AttackSpell::~AttackSpell() {}

void AttackSpell::action(Unit* target) {
	target->getPhysicalState()->isAlive();
	owner->getMagicalState()->isUsingSpell(manaConsumption);
	if ( target->getUnitClass() != "Berserker") {
		if ( target->getUnitClass() == "Werewolf(wolf)" ) {
			target->getPhysicalState()->isUnderAttack(power*2);
		} else if ( owner->getUnitClass() == "Priest" ) {
			if ( target->getUnitClass() == "Vampire" || target->getUnitClass() == "Nacromancer" ) {
				target->getPhysicalState()->isUnderAttack(power*2);
			} else {
				target->getPhysicalState()->isUnderAttack(power);
			}
		} else {
			target->getPhysicalState()->isUnderAttack(power);
		}
	}
}
