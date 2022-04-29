#include "../includes/student.h"


student::student() {
    
}

student::~student() {

}

void student::setIdentifier(int identifier) {
    identifier = identifier;
}    

void student::setName(string name) {
     name = name;
}

void student::setSurname(string surname) {
     surname = surname;
}

int student::getIdentifier() {
    return identifier;
}

string student::getName() {
    return name;
}

string student::getSurname() {
    return surname;
}