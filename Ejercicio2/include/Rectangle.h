#pragma once

#include "../include/Point.h"

#include <ostream>

using namespace std;

class Rectangle {
    private:
        float width;
        float height;
        Point position;

    public:
        Rectangle();
        Rectangle(const float _width, const float _height);
        Rectangle(const float _width, const float _height, const Point& _position);
        Rectangle(const float _width, const float _height, const float _x, const float _y);
        ~Rectangle() = default;

        Point getPosition() const;
        float getX() const;
        float getY() const;
        float getWidth() const;
        float getHeight() const;

        void setPosition(const Point& _position);
        void setPosition(const float _x, const float _y);
        void setWidth(const float _width);
        void setHeight(const float _height);

        friend ostream& operator<<(ostream& os, const Rectangle& rectangle);
};