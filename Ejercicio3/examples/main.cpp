#include "../include/JSONBuilder.h"
#include "../include/JSONContainer.h"

#include <iostream>
#include <fstream>
#include <string>

int main() {
    JSONContainer<double> doubles;
    JSONContainer<string> strings;
    JSONContainer<vector<int>> intVectors;
    
    doubles.addData(1.3);
    doubles.addData(2.1);
    doubles.addData(3.2);

    strings.addData("Hola");
    strings.addData("Mundo");

    intVectors.addData({1, 2});
    intVectors.addData({3, 4});

    JSONBuilder builder;

    builder.addData("vec_doubles", doubles);
    builder.addData("palabras", strings);
    builder.addData("listas", intVectors);

    cout << builder.printJSON() << endl;
    
    ofstream jsonFile("data/output.json");
    
    if (jsonFile.is_open()) {
        jsonFile << builder.printJSON();
        jsonFile.close();
    } else {
        cerr << "Error: No se pudo abrir el archivo para escritura" << endl;
        return 1;
    }
    
    return 0;
}