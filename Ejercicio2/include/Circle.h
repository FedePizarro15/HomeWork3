#pragma once

#include "../include/Point.h"

class Circle {
    private:
        float radius;
        Point center;

    public:
        Circle();
        Circle(const float _radius);
        Circle(const float _radius, const Point& _center);
        Circle(const float _radius, const float _x, const float _y);
        ~Circle() = default;

        Point getCenter() const;
        float getX() const;
        float getY() const;
        float getRadius() const;

        void setCenter(const Point& _center);
        void setCenter(const float _x, const float _y);
        void setRadius(const float _radius);

        friend ostream& operator<<(ostream& os, const Circle& circle);
};