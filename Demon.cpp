#include "Demon.h"

Demon::Demon(): Unit("Demon", new DefaultAbility(this, 85), new Undead(650)) {}
Demon::~Demon() {}
