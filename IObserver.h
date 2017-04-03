#ifndef IOBSERVER_H
#define IOBSERVER_H

class IObserver {
public:
	virtual void observe(Unit* target) = 0;
};

#endif
