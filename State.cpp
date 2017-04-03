#include "State.h"

State::State(int feature): feature(feature), maxFeature(feature) {}
State::~State() {}

int State::getFeature() const {
	return feature;
}

int State::getMaxFeature() const {
	return maxFeature;
}
