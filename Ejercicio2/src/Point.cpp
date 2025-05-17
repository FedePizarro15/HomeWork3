#include "../include/Point.h"

Point::Point() : x(0.0f), y(0.0f) {}

Point::Point(const float _x, const float _y) : x(_x), y(_y) {}

void Point::setX(const float _x) {x = _x;}

void Point::setY(const float _y) {y = _y;}

void Point::setPoint(const float _x, const float _y) {
    x = _x;
    y = _y;
}

float Point::getX() const {return x;}

float Point::getY() const {return y;}

std::ostream& operator<<(std::ostream& os, const Point& point) {
    os << "(" << point.x << ", " << point.y << ")";
    return os;
}