#ifndef WEREWOLF_H
#define WEREWOLF_H

class Werewolf: public Unit {
private:	
	PhysicalAbility* alternativeAbility;
	PhysicalState* alternativeState;
	
	void changeStateStatus();
public:
	Werewolf();
	~Werewolf();

	void transform();
};

#endif
