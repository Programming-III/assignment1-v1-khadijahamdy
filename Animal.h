#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>
using namespace std;

 
#include <iostram>
using namespace std;
#ifndef ANIMAL_H
#define ANIMAL_H
class animal{
    private: 
    string name;
    int age;
    bool isHungry;
    public:
    animal();
    animal(string name,int age, bool isHungry);
    void display();
    void feed();
    void feed();
    void setname();
    void setage();
    void setisHungry();
    getname();
    getage();
    gethungry();
}
#endif


#endif
