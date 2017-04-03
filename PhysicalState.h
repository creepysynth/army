#ifndef PHYSICALSTATE_H
#define PHYSICALSTATE_H

#include "State.h"
#include "IObservable.h"

class UnitIsDeadException {};

class PhysicalState: public State, public IObservable {
protected:
	Unit* observer;
public:
	PhysicalState(int hp);
	virtual ~PhysicalState();

	void setObserver(Unit* newObserver);

	void isAlive();
	void isHealed(int healHP);
	virtual void isUnderAttack(int damage);
};

#endif
