#ifndef HEALSPELL_H
#define HEALSPELL_H

class HealSpell: public MagicalAbility {
public:
	HealSpell(SpellCaster* owner, int power, int manaConsumption);
	~HealSpell();

	void action(Unit* target);
};

#endif
