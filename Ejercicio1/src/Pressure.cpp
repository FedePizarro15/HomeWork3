#include "Pressure.h"

#include <iostream>

void Pressure::serialize(ofstream& out) const {
    BaseMedition::serialize(out);
    out.write(reinterpret_cast<const char*>(&staticPressure), sizeof(staticPressure));
    out.write(reinterpret_cast<const char*>(&dinamicPressure), sizeof(dinamicPressure));
}

void Pressure::deserialize(ifstream& in) {
    BaseMedition::deserialize(in);
    in.read(reinterpret_cast<char*>(&staticPressure), sizeof(staticPressure));
    in.read(reinterpret_cast<char*>(&dinamicPressure), sizeof(dinamicPressure));
}

void Pressure::print() const {
    cout << "Presión Estática: " << staticPressure << endl;
    cout << "Presión Dinámica: " << dinamicPressure << endl;
    cout << "Tiempo de Medición: " << getTime() << endl << endl;
}