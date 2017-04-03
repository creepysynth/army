#ifndef WARLOCK_H
#define WARLOCK_H

class Warlock: public SpellCaster {
public:
	Warlock();
	~Warlock();

	Demon* summonDemon();
};

#endif
