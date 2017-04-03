#ifndef HEALING_H
#define HEALING_H

class Healing: public HealSpell {
public:
	Healing(SpellCaster* owner, int power);
	~Healing();
};

#endif
