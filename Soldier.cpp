#include "Soldier.h"

Soldier::Soldier(): Unit("Soldier", new DefaultAbility(this, 80), new Mortal(600)) {}
Soldier::~Soldier() {}
