#include "Position.h"

#include <iostream>

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