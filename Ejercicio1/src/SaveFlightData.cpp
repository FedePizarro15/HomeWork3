#include "../include/SaveFlightData.h"

#include <iostream>

void SaveFlightData::serialize(ofstream& out) const {
    position.serialize(out);
    pressure.serialize(out);
}

void SaveFlightData::deserialize(ifstream& in) {
    position.deserialize(in);
    pressure.deserialize(in);
}

void SaveFlightData::print() {
    cout << "Posición: " << endl << endl;
    position.print();

    cout << "Presión: " << endl << endl;
    pressure.print();
}