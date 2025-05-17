#include "../include/JSONBuilder.h"
#include "../include/JSONContainer.h"

#include <iostream>

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

    cout << builder.printJSON();
    return 0;
}