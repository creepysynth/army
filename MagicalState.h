#ifndef MAGICALSTATE_H
#define MAGICALSTATE_H

class OutOfManaException {};

class MagicalState: public State {
public:
	MagicalState(int mana);
	virtual ~MagicalState();
	
	virtual void isUsingSpell(int manaConsumption);
};

#endif
