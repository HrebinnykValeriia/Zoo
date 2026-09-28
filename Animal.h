#ifndef ANIMAL_H
#define ANIMAL_H
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

class Animal {
protected:
    string name;
    string origin;
    int age;
    double weight;
    double foodDay;
public:
    Animal(string name, string origin, int age, double weight, double foodDay);
    virtual ~Animal();
    double foodMonth();
    string getName();
    virtual string getType() = 0;
    friend ifstream& operator>>(ifstream& s, Animal& animal);
    friend ofstream& operator<<(ofstream& s, const Animal& animal);
    friend ostream& operator<<(ostream& s, const Animal& animal);
};
#endif