#pragma once

#include "Position.h"
#include "Pressure.h"

#include <fstream>

using namespace std;

class SaveFlightData {
    public:
        Position& position;
        Pressure& pressure;

        SaveFlightData(Position& _position, Pressure& _pressure) :
            position(_position),
            pressure(_pressure) {};
        
        ~SaveFlightData() = default;

        void serialize(ofstream& out) const;
        void deserialize(ifstream& in);

        void print();
};