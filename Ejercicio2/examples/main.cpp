#include "../include/Rectangle.h"
#include "../include/Circle.h"
#include "../include/Ellipse.h"
#include "../include/FigureProcessor.h"

#include <iostream>
#include <random>

int main() {
    random_device rd;
    mt19937 gen(rd());
    uniform_real_distribution<float> dist(1.0f, 10.0f);

    Rectangle rect(dist(gen), dist(gen), dist(gen), dist(gen));
    Circle circ(dist(gen), dist(gen), dist(gen));
    Ellipse ellip(dist(gen), dist(gen), dist(gen), dist(gen));

    cout << "Rectángulo: " << rect << endl;
    cout << "Círculo: " << circ << endl;
    cout << "Elipse: " << ellip << endl << endl;

    FigureProcessor<Rectangle> rectProc;
    FigureProcessor<Circle> circProc;
    FigureProcessor<Ellipse> ellipProc;

    cout << "Área del rectángulo: " << rectProc.calculateArea(rect) << endl;
    cout << "Área del círculo: " << circProc.calculateArea(circ) << endl;
    cout << "Área de la elipse: " << ellipProc.calculateArea(ellip) << endl;

    return 0;
}
