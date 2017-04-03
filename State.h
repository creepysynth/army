#ifndef STATE_H
#define STATE_H

class State {
protected:
	int feature;
	int maxFeature;
public:
	State(int feature);
	virtual ~State();

	int getFeature() const;
	int getMaxFeature() const;
};

#endif
