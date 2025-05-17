#pragma once

#include <ostream>

using namespace std;

class Point {
    private:
        float x, y;
    
    public:
        Point();
        Point(const float _x, const float _y);
        ~Point() = default;

        void setX(const float _x);
        void setY(const float _y);
        void setPoint(const float _x, const float _y);

        float getX() const;
        float getY() const;

        friend ostream& operator<<(ostream& os, const Point& point);
};