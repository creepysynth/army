#ifndef SPELLCASTER_H
#define SPELLCASTER_H

#include "MagicalAbility.h"
#include "MagicalState.h"

#define SPELLBOOKSIZE 2

class SpellCaster: public Unit {
protected:
	MagicalAbility* spellbook[SPELLBOOKSIZE];
	MagicalState* magicalState;
public:
	SpellCaster(
		std::string unitClass,
		PhysicalAbility* physicalAbility,
		PhysicalState* physicalState,
		MagicalAbility* attackSpell,
		MagicalAbility* healSpell,
		MagicalState* magicalState);
	virtual ~SpellCaster();

	MagicalAbility* getAttackSpell() const;
	MagicalAbility* getHealSpell() const;
	MagicalState* getMagicalState() const;

	virtual void heal(Unit* enemy);
	virtual void useSpell(Unit* enemy);
};

std::ostream& operator<<(std::ostream& out, SpellCaster* unit);

#endif
