// real world scenario
#include<bits/stdc++.h>
using namespace std;
//base class
class Animal{
    public:
        virtual void eat(){
            cout << "I am eating generic food";
        }
};

class Cat : public Animal{
    public:
    void eat(){
            cout << "I am eating cat food";
    }
};
class Dog: public Animal{
    public:
    void eat(){
            cout << "I am eating dog food";
    }
};
void function1(Animal *xyz){
    xyz->eat();
}
int main(){
    Animal *ptr;
    Cat catObj;
    Dog dogObj;
    ptr = &catObj;
    function1(ptr);
}