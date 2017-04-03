#include <iostream>
#include "Army.h"

int main() {
	Soldier* soldier = new Soldier();
	Rogue* rogue = new Rogue();
	Berserker* berserker = new Berserker();
	Vampire* vampire = new Vampire();
	Werewolf* werewolf = new Werewolf();
	Wizard* wizard = new Wizard();
	Healer* healer = new Healer();
	Priest* priest = new Priest();
	Warlock* warlock = new Warlock();
	Necromancer* necromancer = new Necromancer();
	Demon* demon;

	demon = warlock->summonDemon();

	std::cout << soldier << std::endl;
	std::cout << rogue << std::endl;
	std::cout << berserker << std::endl;
	std::cout << vampire << std::endl;
	std::cout << werewolf << std::endl;
	std::cout << wizard << std::endl;
	std::cout << healer << std::endl;
	std::cout << priest << std::endl;
	std::cout << warlock << std::endl;
	std::cout << demon << std::endl;
	std::cout << necromancer;
	std::cout << "-----------------------\n" << std::endl;

	vampire->attack(warlock);
	warlock->counterAttack(vampire);
	warlock->useSpell(vampire);
	vampire->counterAttack(warlock);

	std::cout << vampire << std::endl;
	std::cout << warlock << std::endl;

	delete soldier;
	delete rogue;
	delete berserker;
	delete vampire;
	delete werewolf;
	delete wizard;
	delete healer;
	delete priest;
	delete warlock;
	delete necromancer;
	delete demon;
	
	return 0;
}
