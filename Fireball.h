#ifndef FIREBALL_H
#define FIREBALL_H

class Fireball: public AttackSpell {
public:
	Fireball(SpellCaster* owner, int power);
	~Fireball();
};

#endif
