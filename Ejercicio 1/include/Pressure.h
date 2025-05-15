#pragma once

#include "BaseMedition.h"

using namespace std;

class Pressure : public BaseMedition {
    public:
        float staticPressure;
        float dinamicPressure;

        Pressure(float _meditionTime, float _staticPressure, float _dinamicPressure) :
            BaseMedition(_meditionTime),
            staticPressure(_staticPressure),
            dinamicPressure(_dinamicPressure) {};
        
        ~Pressure() = default;

        void serialize(ofstream& out) const override;
        void deserialize(ifstream& in) override;

        void print() const override;
};