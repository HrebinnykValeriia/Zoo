#ifndef AREA_H
#define AREA_H
#include "Animal.h"
#include <vector>

class Area {
private:
    string name;
    string animalType;
    int maxAnimals;
    vector<Animal*> animals;
public:
    Area(string name, string animalType, int maxAnimals);
    bool addAnimal(Animal* animal);
    void removeAnimal(Animal* animal);
    bool hasFreeSpace();
    int getCount();
    friend ostream& operator<<(ostream& s, const Area& area);
    friend ofstream& operator<<(ofstream& s, const Area& area);
};
#endif