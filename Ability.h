#ifndef ABILITY_H
#define ABILITY_H

class Unit;

class Ability {
protected:
    int power;
public:
    Ability(int power);
    virtual ~Ability();

    int getPower() const;

    virtual void action(Unit* target) = 0;
};

#endif
