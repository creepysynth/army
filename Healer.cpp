#include "Healer.h"

Healer::Healer(): 
	SpellCaster(
		"Healer",
		new DefaultAbility(this, 10),
		new Mortal(120),
		new Icicle(this, 40),
		new Healing(this, 80),
		new SupportMage(100))
	{}
Healer::~Healer() {}
