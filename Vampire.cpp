#include "Vampire.h"

Vampire::Vampire(): Unit("Vampire", new VampireAbility(this, 42), new Undead(350)) {}
Vampire::~Vampire() {}
