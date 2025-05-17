#pragma once

#include <string>
#include <vector>

using namespace std;

template<typename T>
class JSONContainer {
    private:
        vector<T> data;
    public:
        JSONContainer();
        JSONContainer(const vector<T>& _data);
        ~JSONContainer() = default;

        void addData(const T& value);
        string processData() const;
};