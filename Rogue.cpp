#include "Rogue.h"

Rogue::Rogue(): Unit("Rogue", new DefaultAbility(this, 50), new Mortal(400)) {}
Rogue::~Rogue() {}
