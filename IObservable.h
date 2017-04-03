#ifndef IOBSERVABLE_H
#define IOBSERVABLE_H

class IObservable {
public:
	virtual void setObserver(Unit* newObserver) = 0;
};

#endif
