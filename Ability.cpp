#include "Ability.h"

Ability::Ability(int power): power(power) {}
Ability::~Ability() {}

int Ability::getPower() const {
	return power;
}
