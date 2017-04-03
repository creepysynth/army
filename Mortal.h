#ifndef MORTAL_H
#define MORTAL_H

class Mortal: public PhysicalState {
public:
	Mortal(int hp);
	~Mortal();
};

#endif
