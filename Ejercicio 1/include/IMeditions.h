#pragma once

#include <fstream>

using namespace std;

class IMeditions {
    public:
        virtual ~IMeditions() = default;

        virtual void serialize(ofstream& out) const = 0;
        virtual void deserialize(ifstream& in) = 0;
};