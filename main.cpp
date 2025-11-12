#include "Animal.h"
#include "Bird.h"
#include "Mammal.h"
#include "Reptile.h"
#include "Enclosure.h"
#include "Visitor.h"
#include <iostream>
using namespace std;


using namespace std;
#include <iostream>
#include 'zoo.h'
#include 'mammal.h'

string animal::zoo(){
    
}
string animal::zoo(string name,int age, bool isHungry){
    this-> name=name;
    this-> age = age;
    this-> isHungry = isHungry;
}
void animal::display(){
    cout<<name<<endl;
    cout<<age<<endl;
    cout<<isHungry<<endl;
    
}
void animal::feed(){
    if(animal==isHungry);
    cout<<isHungry<<endl;
    
}
void animal::setname(int name){
 int name=name;}
 void animal::setage(int age){
     int age=age;}
     void animal::setisHungry(bool s){
         bool s=setisHungry;
     }
   string animal::getname(){
     return name;
 }
    int animal::getage(){
     return age;
 }
 bool animal:: gethungry(){
     return isHungry();
 }
 string  mammal:: mammal(){}
  string  mammal:: mammal(string furColor){
      this->furColor=furColor;
  }
  void mammal:: setfurColor(int s){
      int s=setfurColor;
  }
 string mammal::getfurColor(){
     return furColor;
 }
 string bird::bird(){}
 string bird::bird(float wingSpan){
     this->wingSpan=wingSpan;
 }
 void bird:: setwing(float b){
     float b=setwing();
 }
 string bird::getwing(){
     return setwing;
 }
int main()
{
    std::cout<<"Hello World";

    return 0;
}
int main() {
    
    
    return 0;
}
