#include "SpellCaster.h"

SpellCaster::SpellCaster(
	std::string unitClass,
	PhysicalAbility* physicalAbility,
	PhysicalState* physicalState,
	MagicalAbility* attackSpell,
	MagicalAbility* healSpell,
	MagicalState* magicalState): 
		Unit(unitClass, physicalAbility, physicalState) {		
			this->spellbook[0] = attackSpell;
			this->spellbook[1] = healSpell;
			this->magicalState = magicalState;
		}	
SpellCaster::~SpellCaster() {
	for(int i = 0; i < SPELLBOOKSIZE; i++ ) {
		delete spellbook[i];
	}
	delete magicalState;
}

MagicalAbility* SpellCaster::getAttackSpell() const {
	return spellbook[0];
}

MagicalAbility* SpellCaster::getHealSpell() const {
	return spellbook[1];
}

MagicalState* SpellCaster::getMagicalState() const {
	return magicalState;
}

void SpellCaster::heal(Unit* target) {
	this->physicalState->isAlive();
	if ( this->spellbook[1] != NULL ) {
		this->spellbook[1]->action(target);
	}
}

void SpellCaster::useSpell(Unit* enemy) {
	this->physicalState->isAlive();
	this->spellbook[0]->action(enemy);
}

std::ostream& operator<<(std::ostream& out, SpellCaster* unit) {
    out 
        << "Unit class: " << unit->getUnitClass() << "\n"
        << "   HP: " << unit->getPhysicalState()->getFeature() << "/" << unit->getPhysicalState()->getMaxFeature() << "\n"
        << "   Physical damage: " << unit->getPhysicalAbility()->getPower() << "\n"
        << "   Mana: " << unit->getMagicalState()->getFeature() << "/" << unit->getMagicalState()->getMaxFeature() << "\n"
        << "   Magical damage: " << unit->getAttackSpell()->getPower()
    	<< std::endl;
    if ( unit->getHealSpell() != NULL ) {
    	out << "   Heal rate: " << unit->getHealSpell()->getPower() << std::endl;
    }

    return out;
}
