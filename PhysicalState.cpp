#include "PhysicalState.h"

PhysicalState::PhysicalState(int hp): State(hp) {}
PhysicalState::~PhysicalState() {}

void PhysicalState::setObserver(Unit* newObserver) {
	if ( observer == NULL ) {		
		this->observer = newObserver;
	}
}

void PhysicalState::isAlive() {
	if ( feature == 0 ) {
		throw UnitIsDeadException();
	}
}

void PhysicalState::isHealed(int healHP) {
	int totalHp = feature + healHP;

	if ( totalHp > maxFeature ) {
		feature = maxFeature; 
	} else {
		feature = totalHp;
	}
}

void PhysicalState::isUnderAttack(int damage) {
	int totalHp = feature - damage;

	if ( totalHp <= 0 ) {
		feature = 0;
		if ( observer != NULL ) {
			observer->getPhysicalState()->isHealed(this->maxFeature/5);
		}
	} else {
		feature = totalHp;
	}
}
