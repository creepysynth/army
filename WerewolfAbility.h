#ifndef WEREWOLFABILITY_H
#define WEREWOLFABILITY_H

class WerewolfAbility: public PhysicalAbility {
private:
	void infect(Unit* target);
public:
	WerewolfAbility(Unit* owner, int power);
	~WerewolfAbility();

	void action(Unit* target);
	void counterAction(Unit* target);
};

#endif
