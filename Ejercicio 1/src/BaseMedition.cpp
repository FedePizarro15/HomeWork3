#include "../include/BaseMedition.h"

BaseMedition::BaseMedition(float _meditionTime) {
    meditionTime = make_unique<float>(_meditionTime);
}

void BaseMedition::serialize(ofstream& out) const {
    out.write(reinterpret_cast<const char*>(meditionTime.get()), sizeof(*meditionTime));
}

void BaseMedition::deserialize(ifstream& in) {
    in.read(reinterpret_cast<char*>(meditionTime.get()), sizeof(*meditionTime));
}

float BaseMedition::getTime() const {return *meditionTime;}