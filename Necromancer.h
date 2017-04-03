#ifndef NECROMANCER_H
#define NECROMANCER_H

#include "MagicalState.h"
#include "IObserver.h"

class Necromancer: public SpellCaster, public IObserver {
private:
	void observe(Unit* target);
public:
	Necromancer();
	~Necromancer();

	void attack(Unit* enemy);
	void useSpell(Unit* enemy);
};

#endif
