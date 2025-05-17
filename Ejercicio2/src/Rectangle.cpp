#include "../include/Rectangle.h"

#include <ostream>

Rectangle::Rectangle() : width(1.0f), height(1.0f), position(Point()) {}

Rectangle::Rectangle(const float _width, const float _height) : width(_width), height(_height), position(Point()) {}

Rectangle::Rectangle(const float _width, const float _height, const Point& _position) : width(_width), height(_height), position(_position) {}

Rectangle::Rectangle(const float _width, const float _height, const float _x, const float _y) : width(_width), height(_height), position(Point(_x, _y)) {}

Point Rectangle::getPosition() const {return position;}

float Rectangle::getX() const {return position.getX();}

float Rectangle::getY() const {return position.getY();}

float Rectangle::getWidth() const {return width;}

float Rectangle::getHeight() const {return height;}

void Rectangle::setPosition(const Point& _position) {position = _position;}

void Rectangle::setPosition(const float _x, const float _y) {
    position.setX(_x);
    position.setY(_y);
}

void Rectangle::setWidth(const float _width) {width = _width;}

void Rectangle::setHeight(const float _height) {height = _height;}

ostream& operator<<(ostream& os, const Rectangle& rectangle) {
    os << "Ancho = " << rectangle.width
       << ", Largo = " << rectangle.height
       << ", Posición = " << rectangle.position;
    return os;
}