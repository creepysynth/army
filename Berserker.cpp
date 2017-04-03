#include "Berserker.h"

Berserker::Berserker(): Unit("Berserker", new DefaultAbility(this, 55), new Mortal(450)) {}
Berserker::~Berserker() {}
