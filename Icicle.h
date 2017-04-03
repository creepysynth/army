#ifndef ICICLE_H
#define ICICLE_H

class Icicle: public AttackSpell {
public:
	Icicle(SpellCaster* owner, int power);
	~Icicle();
};

#endif
