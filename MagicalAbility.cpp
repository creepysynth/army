#include "MagicalAbility.h"

MagicalAbility::MagicalAbility(SpellCaster* owner, int power, int manaConsumption): Ability(power) {
	this->owner = owner;
	this->manaConsumption = manaConsumption;
}
MagicalAbility::~MagicalAbility() {}

int MagicalAbility::getManaConsumption() const {
	return manaConsumption;
}
