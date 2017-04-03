#include "Wizard.h"

Wizard::Wizard(): 
	SpellCaster(
		"Wizard",
		new DefaultAbility(this, 10),
		new PhysicalState(150),
		new Lightning(this, 70),
		new Healing(this, 35),
		new BattleMage(75))
	{}
Wizard::~Wizard() {}
