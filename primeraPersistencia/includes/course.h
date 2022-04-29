#pragma once

#include <iostream>
using namespace std;

class course {
    private:
        int _identifier;
        string _name;

    public:
        course();
        ~course();

        void setIdentifier(int identifier);
        void setName(string name);
        int getIdentifier();
        string getName();
};