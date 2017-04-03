#include "HealSpell.h"

HealSpell::HealSpell(SpellCaster* owner, int power, int manaConsumption): MagicalAbility(owner, power, manaConsumption) {}
HealSpell::~HealSpell() {}

void HealSpell::action(Unit* target) {
	target->getPhysicalState()->isAlive();
	owner->getMagicalState()->isUsingSpell(manaConsumption);
	if ( target->getUnitClass() != "Berserker") {
		target->getPhysicalState()->isHealed(power);
	}
}
