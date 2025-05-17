#include "../include/Pressure.h"

#include <iostream>

Pressure::Pressure() : staticPressure(0.0f), dinamicPressure(0.0f) {
    meditionTime = make_unique<float>(0.0f);
}

Pressure::Pressure(float _meditionTime, float _staticPressure, float _dinamicPressure) : staticPressure(_staticPressure), dinamicPressure(_dinamicPressure) {
    meditionTime = make_unique<float>(_meditionTime);
}

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