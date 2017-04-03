#ifndef ATTACKSPELL_H
#define ATTACKSPELL_H

class AttackSpell: public MagicalAbility {
public:
	AttackSpell(SpellCaster* owner, int power, int manaConsumption);
	~AttackSpell();

	void action(Unit* target);
};

#endif
