#pragma once

#include "../include/Point.h"

class Ellipse {
    private:
        float semiMajor;
        float semiMinor;
        Point center;
    
    public:
        Ellipse();
        Ellipse(const float _semiMajor, const float _semiMinor);
        Ellipse(const float _semiMajor, const float _semiMinor, const Point& _center);
        Ellipse(const float _semiMajor, const float _semiMinor, const float _x, const float _y);
        ~Ellipse() = default;

        Point getCenter() const;
        float getX() const;
        float getY() const;
        float getSemiMajor() const;
        float getSemiMinor() const;

        void setCenter(const Point& _center);
        void setCenter(const float _x, const float _y);
        void setSemiMajor(const float _semiMajor);
        void setSemiMinor(const float _semiMinor);

        friend ostream& operator<<(ostream& os, const Ellipse& ellipse);
};