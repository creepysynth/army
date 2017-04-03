#ifndef MAGICALABILITY_H
#define MAGICALABILITY_H

class SpellCaster;

class MagicalAbility: public Ability {
protected:
	SpellCaster* owner;
	int manaConsumption;
public:
	MagicalAbility(SpellCaster* owner, int power, int manaConsumption);
	virtual ~MagicalAbility();

	int getManaConsumption() const;

	virtual void action(Unit* target) = 0;
};

#endif
