#include "Fireball.h"

Fireball::Fireball(SpellCaster* owner, int power): AttackSpell(owner, power, 20) {}
Fireball::~Fireball() {}
