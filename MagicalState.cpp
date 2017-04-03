#include "MagicalState.h"

MagicalState::MagicalState(int mana): State(mana) {}
MagicalState::~MagicalState() {}

void MagicalState::isUsingSpell(int manaConsumption) {
	if ( feature < manaConsumption ) {
		throw OutOfManaException();
	}
	feature -= manaConsumption;
}
