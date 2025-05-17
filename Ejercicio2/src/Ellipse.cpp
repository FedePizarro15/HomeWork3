#include "../include/Ellipse.h"

#include <ostream>

Ellipse::Ellipse() : semiMajor(1.0f), semiMinor(1.0f), center(Point()) {}

Ellipse::Ellipse(const float _semiMajor, const float _semiMinor) : semiMajor(_semiMajor), semiMinor(_semiMinor), center(Point()) {}

Ellipse::Ellipse(const float _semiMajor, const float _semiMinor, const Point& _center) : semiMajor(_semiMajor), semiMinor(_semiMinor), center(_center) {}

Ellipse::Ellipse(const float _semiMajor, const float _semiMinor, const float _x, const float _y) : semiMajor(_semiMajor), semiMinor(_semiMinor), center(Point(_x, _y)) {}

Point Ellipse::getCenter() const {return center;}

float Ellipse::getX() const {return center.getX();}

float Ellipse::getY() const {return center.getY();}

float Ellipse::getSemiMajor() const {return semiMajor;}

float Ellipse::getSemiMinor() const {return semiMinor;}

void Ellipse::setCenter(const Point& _center) {center = _center;}

void Ellipse::setCenter(const float _x, const float _y) {
    center.setX(_x);
    center.setY(_y);
}

void Ellipse::setSemiMajor(const float _semiMajor) {semiMajor = _semiMajor;}

void Ellipse::setSemiMinor(const float _semiMinor) {semiMinor = _semiMinor;}

ostream& operator<<(ostream& os, const Ellipse& ellipse) {
    os << "Semieje Mayor = " << ellipse.semiMajor
       << ", Semieje Menor = " << ellipse.semiMinor
       << ", Centro = " << ellipse.center;
    return os;
}