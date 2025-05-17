#include "../include/JSONBuilder.h"
#include "../include/JSONContainer.h"

using namespace std;

JSONBuilder::JSONBuilder() : data{} {};

JSONBuilder::JSONBuilder(const vector<pair<string, string>>& _data) : data(_data) {};

template<typename T>
void JSONBuilder::addData(const string& key, const JSONContainer<T>& value) {data.push_back(pair(key, value.processData()));}

string JSONBuilder::printJSON() {
    string toPrint;

    for (size_t i = 0; i < data.size(); i++) {
        toPrint += "\"" + data[i].first + "\" : " + data[i].second + ((i < data.size() - 1) ? ",\n" : "");
    }

    return "{\n" + toPrint + "\n}\n";
}

template void JSONBuilder::addData<double>(const std::string&, const JSONContainer<double>&);
template void JSONBuilder::addData<std::string>(const std::string&, const JSONContainer<std::string>&);
template void JSONBuilder::addData<std::vector<int>>(const std::string&, const JSONContainer<std::vector<int>>&);