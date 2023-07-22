#include<bits/stdc++.h>
using namespace std;

class Base{
    public:
    void show(){
        cout << "Base class show function called" << endl;
    }
    virtual void print(){
        cout << "Base class print function called" << endl;
    }
};
class myDerived : public Base{
    public:
    void show(){
        cout << "Derived class show function called" << endl;
    }
    void print(){
        cout << "Derived class print function called" << endl;
    }
};
int main(){
    Base *baseptr;
    myDerived derivedObj;
    baseptr = &derivedObj;

    //run time polymorphism
    baseptr->print(); //derived class print function was called
    baseptr->show();//base class show fn was called
}