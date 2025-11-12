#ifndef ENCLOSURE_H
#define ENCLOSURE_H

#include "Animal.h"

 
#include <iostram>
using namespace std;
#ifndef ENCLOSURE_H
#define ENCLOSURE_H
class enclosure{
    private:
    int capacity;
    Animal* a;
    int currentCount;
    public:
    enclosure();
    enclosure(int capacity,Animal* a,int currentCount);
    void addAnimal(Animal*a);
    void displayAnimals();
}
#endif







#endif
