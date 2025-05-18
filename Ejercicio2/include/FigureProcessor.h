#pragma once

#include "Rectangle.h"
#include "Circle.h"
#include "Ellipse.h"

#include <iostream>
#include <math.h>

template<typename T>
class FigureProcessor {
    public:
        float calculateArea(const T& object) const {return 0.0f;}
};

template<> class FigureProcessor<Rectangle> {
    public:
        float calculateArea(const Rectangle& rectangle) const {
            return rectangle.getWidth() * rectangle.getHeight();
        }
};

template<> class FigureProcessor<Circle> {
    public:
        float calculateArea(const Circle& circle) const {
            return M_PI * circle.getRadius() * circle.getRadius();
        }
};

template<> class FigureProcessor<Ellipse> {
    public:
        float calculateArea(const Ellipse& ellipse) const {
            return M_PI * ellipse.getSemiMajor() * ellipse.getSemiMinor();
        }
};