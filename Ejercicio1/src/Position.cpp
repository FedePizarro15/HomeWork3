#include "../include/Position.h"

#include <iostream>

//?? Por que no me permite hacer de forma implicita meditionTime

Position::Position() : latitude(0.0f), longitude(0.0f), altitude(0.0f) {
    meditionTime = make_unique<float>(0.0f);
}

Position::Position(float _meditionTime, float _latitude, float _longitude, float _altitude) : latitude(_latitude), longitude(_longitude), altitude(_altitude) {
    meditionTime = make_unique<float>(_meditionTime);
}

void Position::serialize(ofstream& out) const {
    BaseMedition::serialize(out);
    out.write(reinterpret_cast<const char*>(&latitude), sizeof(latitude));
    out.write(reinterpret_cast<const char*>(&longitude), sizeof(longitude));
    out.write(reinterpret_cast<const char*>(&altitude), sizeof(altitude));
}

void Position::deserialize(ifstream& in) {
    BaseMedition::deserialize(in);
    in.read(reinterpret_cast<char*>(&latitude), sizeof(latitude));
    in.read(reinterpret_cast<char*>(&longitude), sizeof(longitude));
    in.read(reinterpret_cast<char*>(&altitude), sizeof(altitude));

}

void Position::print() const {
    cout << "Latitud: " << latitude << endl;
    cout << "Longitud: " << longitude << endl;
    cout << "Altitud: " << altitude << endl;
    cout << "Tiempo de Medición: " << getTime() << endl << endl;
}