#include "Werewolf.h"

Werewolf::Werewolf(): Unit("Werewolf", new WerewolfAbility(this, 40), new Mortal(250)) {
	this->alternativeAbility = new WerewolfAbility(this, 70);
	this->alternativeState = new Mortal(700);	
}
Werewolf::~Werewolf() {
	delete alternativeAbility;
	delete alternativeState;
}

void Werewolf::transform() {
	PhysicalAbility* tempAbility = physicalAbility;
	PhysicalState* tempState = physicalState;

	physicalState->isAlive();
	physicalAbility = alternativeAbility;
	physicalState = alternativeState;
	alternativeAbility = tempAbility;
	alternativeState = tempState;
	changeStateStatus();
}

void Werewolf::changeStateStatus() {
	if ( unitClass == "Werewolf" ) {
		unitClass = "Werewolf(wolf)";
	} else {
		unitClass = "Werewolf";
	}
}
