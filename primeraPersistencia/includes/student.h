#pragma once
#include <iostream>
using namespace std;

class student
{
private:
    int identifier;
    string name;
    string surname;
public:
    student();
    ~student();

        void setIdentifier(int identifier);
        void setName(string name);
        void setSurname(string surname);
        int getIdentifier();
        string getName();
        string getSurname();

};

student::student()
{
}

student::~student()
{
}
