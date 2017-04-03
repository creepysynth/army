#include "Warlock.h"

Warlock::Warlock():
	SpellCaster(
		"Warlock",
		new DefaultAbility(this, 5),
		new Mortal(90),
		new Lightning(this, 15),
		NULL,
		new BattleMage(120))
	{}
Warlock::~Warlock() {}

Demon* Warlock::summonDemon() {
	this->magicalState->isUsingSpell(55);
	Demon* newDemon = new Demon();

	return newDemon;
}
