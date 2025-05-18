#include "../include/JSONContainer.h"

#include <string>
#include <type_traits>
#include <sstream>
#include <iomanip>

using namespace std;

template<typename T>
JSONContainer<T>::JSONContainer() : data{} {}

template<typename T>
JSONContainer<T>::JSONContainer(const vector<T>& _data) : data(_data) {}

template <typename T>
void JSONContainer<T>::addData(const T& value) {data.push_back(value);}

template <typename T>
string JSONContainer<T>::processData() const {
    if (data.empty()) {return "[]";}

    else if constexpr (is_same_v<T, string>) {
        if (data.size() == 1) {return "\"" + data[0] + "\"";}

        string processedData;

        for (size_t i = 0; i < data.size(); i++) {
            processedData += "\"" + data[i] + "\"" + ((i < data.size() - 1) ? ", " : "");
        }

        return "[" + processedData + "]";
    }
    
    else if constexpr(is_same_v<T, double>) {
        stringstream ss;
        ss << fixed << setprecision(2);
        
        if (data.size() == 1) {
            ss << data[0];
            return ss.str();
        }

        string processedData;

        for (size_t i = 0; i < data.size(); i++) {
            ss.str("");
            ss << data[i];
            processedData += ss.str() + ((i < data.size() - 1) ? ", " : "");
        }

        return "[" + processedData + "]";

    }
    
    else if constexpr(is_same_v<T, vector<int>>) {
        if (data.size() == 1) {            
            if (data[0].size() == 1) {
                return to_string(data[0][0]);
            }

            string processedData;

            for (size_t i = 0; i < data[0].size(); i++) {
                processedData += to_string(data[0][i]) + ((i < data[0].size() - 1) ? ", " : "");
            }

            return "[" + processedData + "]";
        }

        string processedData;

        for (size_t i = 0; i < data.size(); i++) {
            if (data[i].size() == 1) {processedData += "\t" + to_string(data[i][0]);}
            else {
                string processedVectorData;

                for (size_t j = 0; j < data[i].size(); j++) {
                    processedVectorData += to_string(data[i][j]) + ((j < data[i].size() - 1) ? ", " : "");
                }
                processedData += "\t[" + processedVectorData + "]";
            }
            if (i < data.size() - 1) {processedData += ",\n";}
        }

        return "[\n" + processedData + "\n\t]";

    } else {
        return "No se puede procesar este tipo de dato.";
    }
}

template class JSONContainer<double>;
template class JSONContainer<std::string>;
template class JSONContainer<std::vector<int>>;