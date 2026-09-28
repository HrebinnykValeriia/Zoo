#ifndef ZOO_H
#define ZOO_H
#include "Animal.h"

class Tiger : public Animal {
public:
    Tiger(string name, string origin, int age, double weight, double foodDay)
    : Animal(name, origin, age, weight, foodDay) {
    }
    string getType() override {
        return "Tiger";
    }
};
class Crocodile : public Animal {
private:
    double length;
public:
    Crocodile(string name, string origin, int age, double weight, double foodDay, double length)
    : Animal(name, origin, age, weight, foodDay) {
        this->length = length;
    }
    string getType() override {
        return "Crocodile";
    }
    const double getLength() const{
        return length;
    }
};
class Kangaroo : public Animal {
public:
    Kangaroo(string name, string origin, int age, double weight, double foodDay)
    : Animal(name, origin, age, weight, foodDay) {
    }
    string getType() override {
        return "Kangaroo";
    }
};
class Koala : public Animal {
public:
    Koala(string name, string origin, int age, double weight, double foodDay)
    : Animal(name, origin, age, weight, foodDay) {
    }
    string getType() override {
        return "Koala";
    }
};
class Capybara : public Animal {
public:
    Capybara(string name, string origin, int age, double weight, double foodDay)
    : Animal(name, origin, age, weight, foodDay) {
    }
    string getType() override {
        return "Capybara";
    }
};
#endif