#include "../include/Circle.h"

Circle::Circle() : radius(1.0f), center(Point()) {}

Circle::Circle(const float _radius) : radius(_radius), center(Point()) {}

Circle::Circle(const float _radius, const Point& _center) : radius(_radius), center(_center) {}

Circle::Circle(const float _radius, const float _x, const float _y) : radius(_radius), center(Point(_x, _y)) {}

Point Circle::getCenter() const {return center;}

float Circle::getX() const {return center.getX();}

float Circle::getY() const {return center.getY();}

float Circle::getRadius() const {return radius;}

void Circle::setCenter(const Point& _center) {center = _center;}

void Circle::setCenter(const float _x, const float _y) {
    center.setX(_x);
    center.setY(_y);
}

void Circle::setRadius(const float _radius) {radius = _radius;}

ostream& operator<<(ostream& os, const Circle& circle) {
    os << "Radio = " << circle.radius 
       << ", Centro = " << circle.center;
    return os;
}