#include "../include/Position.h"
#include "../include/Pressure.h"
#include "../include/SaveFlightData.h"

int main() {
    Position position(-34.6f, -58.4f, 950.0f, 5.3f);
    Pressure pressure(101.3f, 5.8f, 6.1f);

    SaveFlightData saveFlightData(position, pressure);

    saveFlightData.print();

    ofstream outFile("data/flight_data.bin", ios::binary);
    if (outFile.is_open()) {
        saveFlightData.serialize(outFile);
        outFile.close();
    }

    Position deserializedPosition;
    Pressure deserializedPressure;
    
    SaveFlightData deserializedSaveFlightData(deserializedPosition, deserializedPressure);

    ifstream inFile("data/flight_data.bin", ios::binary);
    if (inFile.is_open()) {
        deserializedSaveFlightData.deserialize(inFile);
        inFile.close();
    }

    deserializedSaveFlightData.print();
}