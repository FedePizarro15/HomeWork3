#pragma once

#include "BaseMedition.h"

using namespace std;

class Position : public BaseMedition {
    public:
        float latitude;
        float longitude;
        float altitude;

        Position();
        Position(float _meditionTime, float _latitude, float _longitude, float _altitude);
        ~Position() = default;

        void serialize(ofstream& out) const override;
        void deserialize(ifstream& in) override;

        void print() const override;
};