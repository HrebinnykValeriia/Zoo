#include "Area.h"
Area::Area(string name, string animalType, int maxAnimals) {
    this->name = name;
    this->animalType = animalType;
    this->maxAnimals = maxAnimals;
}
bool Area::addAnimal(Animal* animal) {
    if (animal->getType() != animalType) {
        throw "This animal cannot be added in this area";
    }
    if (animals.size() >= maxAnimals) {
        throw "This area is full!";
    }
    animals.push_back(animal);
    cout << animal->getName() << " was added to " << name << endl;
    return true;
}
void Area::removeAnimal(Animal* animal) {
    for (int i = 0; i < animals.size(); i++) {
        if (animals[i] == animal) {
            animals.erase(animals.begin() + i);
            cout << animal->getName() << " was removed from " << name << endl;
            return;
        }
    }
    throw "Animal isn't in this area";
}
bool Area::hasFreeSpace() {
    return animals.size() < maxAnimals;
}
int Area::getCount() {
    return animals.size();
}
ostream& operator<<(ostream& s, const Area& area) {
    s << endl;
    s << area.name << endl;
    s << "Animal type: " << area.animalType << endl;
    s << "Animals: " << area.animals.size() << "/" << area.maxAnimals << endl;
    for (Animal* animal : area.animals) {
        s << "- " << animal->getName() << endl;
    }
    return s;
}
ofstream& operator<<(ofstream& s, const Area& area) {
    s << area.name << endl;
    s << area.animalType << endl;
    s << area.maxAnimals << endl;
    s << area.animals.size() << endl;
    for (Animal* animal : area.animals) {
        s << animal->getName() << endl;
    }
    return s;
}