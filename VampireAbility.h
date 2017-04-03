#ifndef VAMPIREABILITY_H
#define VAMPIREABILITY_H

class VampireAbility: public PhysicalAbility {
private:
	void infect(Unit* target);
public:
	VampireAbility(Unit* owner, int power);
	~VampireAbility();

	void action(Unit* target);
	void counterAction(Unit* target);
};

#endif
