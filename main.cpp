#include <iostream>
#include <fstream>
#include "Zoo.h"
#include "Area.h"
using namespace std;

int main() {
    Tiger tiger("Tigger", "Asia", 8, 273, 7);
    Crocodile crocodile("Lolong", "Africa", 27, 776, 2, 6.17);
    Kangaroo kangaroo("Roo", "Australia", 4, 18, 1.5);
    Koala koala("Clancy", "Australia", 12, 4, 1);
    Capybara capybara("Cinnamon", "South America", 7, 41, 2);
    Capybara capybara2("JoeJoe", "South America", 8, 56, 3);

    Area tigerArea("First Area", "Tiger", 2);
    Area crocodileArea("Second Area", "Crocodile", 3);
    Area kangarooArea("Third Area", "Kangaroo", 4);
    Area koalaArea("West Area", "Koala", 5);
    Area capybaraArea("East Area", "Capybara", 6);
    try {
        tigerArea.addAnimal(&tiger);
        crocodileArea.addAnimal(&crocodile);
        kangarooArea.addAnimal(&kangaroo);
        koalaArea.addAnimal(&koala);
        capybaraArea.addAnimal(&capybara);
        capybaraArea.addAnimal(&capybara2);
    }
    catch (const char* exception) {
        cerr << "Error: " << exception << endl;
    }
    cout << tigerArea;
    cout << crocodileArea;
    cout << kangarooArea;
    cout << koalaArea;
    cout << capybaraArea;
    cout << endl;

    cout << "Information about all animals: " << endl;
    cout << tiger << endl;
    cout << crocodile << endl;
    cout << "Length: " << crocodile.getLength() << " m" << endl;
    cout << endl;
    cout << kangaroo << endl;
    cout << koala << endl;
    cout << capybara << endl;
    cout << capybara2 << endl;

    try {
        tigerArea.addAnimal(&crocodile);
    }
    catch (const char* exception) {
        cerr << "Error: " << exception << endl;
    }
    ofstream animalFile("../MyFile/animals.txt");
    if (!animalFile.is_open()) {
        cerr << "Error: open animals file!" << endl;
        return 1;
    }
    animalFile << tiger;
    animalFile << crocodile;
    animalFile << kangaroo;
    animalFile << koala;
    animalFile << capybara;
    animalFile << capybara2;
    animalFile.close();

    ofstream areaFile("../MyFile/areas.txt");
    if (!areaFile.is_open()) {
        cerr << "Error: open areas file!" << endl;
        return 1;
    }
    areaFile << tigerArea;
    areaFile << crocodileArea;
    areaFile << kangarooArea;
    areaFile << koalaArea;
    areaFile << capybaraArea;
    areaFile.close();
    cout << endl;
    ifstream animalInput("../MyFile/animals.txt");
    if (!animalInput.is_open()) {
        cerr << "Error: open animals file!" << endl;
        return 1;
    }
    Animal* zoo[] = {
        &tiger,
        &crocodile,
        &kangaroo,
        &koala,
        &capybara,
        &capybara2
    };
    cout << "Animals from file: " << endl;
    for (Animal* animal : zoo) {
        animalInput >> *animal;
        cout << *animal << endl;
        cout << endl;
    }
    animalInput.close();
    cout << "Information was added to file" << endl;
    return 0;
}