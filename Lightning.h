#ifndef LIGHTNING_H
#define LIGHTNING_H

class Lightning: public AttackSpell {
public:
	Lightning(SpellCaster* owner, int power);
	~Lightning();
};

#endif
