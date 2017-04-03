#include "Healing.h"

Healing::Healing(SpellCaster* owner, int power): HealSpell(owner, power, 10) {}
Healing::~Healing() {}
