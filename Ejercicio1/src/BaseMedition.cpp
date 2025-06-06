#include "../include/BaseMedition.h"

BaseMedition::BaseMedition() : meditionTime(make_unique<float>(0.0f)) {}

BaseMedition::BaseMedition(float _meditionTime) : meditionTime(make_unique<float>(_meditionTime)) {}

BaseMedition::BaseMedition(BaseMedition& _baseMedition) : meditionTime(make_unique<float>(*_baseMedition.meditionTime)) {}

void BaseMedition::serialize(ofstream& out) const {
    out.write(reinterpret_cast<const char*>(meditionTime.get()), sizeof(*meditionTime));
}

void BaseMedition::deserialize(ifstream& in) {
    in.read(reinterpret_cast<char*>(meditionTime.get()), sizeof(*meditionTime));
}

float BaseMedition::getTime() const {return *meditionTime;}