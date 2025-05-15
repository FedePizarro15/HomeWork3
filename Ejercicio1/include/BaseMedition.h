#pragma once

#include "IMeditions.h"

#include <memory>

using namespace std;

class BaseMedition : public IMeditions {
    public:
        BaseMedition(float _meditionTime);
        ~BaseMedition() = default;

        virtual void serialize(ofstream& out) const override;
        virtual void deserialize(ifstream& in) override;

        float getTime() const;
        virtual void print() const = 0;
    
    protected:
        unique_ptr<float> meditionTime;
};