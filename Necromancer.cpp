#include "Necromancer.h"

Necromancer::Necromancer(): 
	SpellCaster(
		"Necromancer",
		new DefaultAbility(this, 5),
		new Undead(100),
		new Fireball(this, 60),
		NULL,
		new BattleMage(100))
	{}
Necromancer::~Necromancer() {}

void Necromancer::observe(Unit* target) {
	target->getPhysicalState()->setObserver(this);
}

void Necromancer::attack(Unit* enemy) {
	this->physicalState->isAlive();
	this->observe(enemy);
	this->physicalAbility->action(enemy);
}

void Necromancer::useSpell(Unit* enemy) {
	this->physicalState->isAlive();
	this->observe(enemy);
	this->spellbook[0]->action(enemy);
}
