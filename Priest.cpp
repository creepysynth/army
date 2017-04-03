#include "Priest.h"

Priest::Priest(): 
	SpellCaster(
		"Priest",
		new DefaultAbility(this, 15),
		new Mortal(110),
		new Fireball(this, 30),
		new Healing(this, 60),
		new SupportMage(80))
	{}
Priest::~Priest() {}
