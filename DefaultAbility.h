#ifndef DEFAULTABILITY_H
#define DEFAULTABILITY_H

class DefaultAbility: public PhysicalAbility {
public:
	DefaultAbility(Unit* owner, int power);
	~DefaultAbility();

	void action(Unit* target);
	void counterAction(Unit* target);
};

#endif
