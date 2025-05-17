#pragma once

#include "../include/JSONContainer.h"

#include <string>
#include <vector>

using namespace std;

class JSONBuilder {
    private:
        vector<pair<string, string>> data;
    public:
        JSONBuilder();
        JSONBuilder(const vector<pair<string, string>>& _data);
        ~JSONBuilder() = default;

        template<typename T>
        void addData(const string& key, const JSONContainer<T>& value);
        string printJSON();
};