#include<bits/stdc++.h>
using namespace std;
//base class 1
class A{
    public:
    void printMsg(){
        cout << "Class A print message function" << endl;
    }
};

//base class 2
class B {
    public:
    void printMsg(){
        cout << "Class B print message function" << endl;
    }
};

//multiple inheritance
class AB:public A,public B{
    public:
    void printMsg(){
        cout << "Class AB print message function" << endl;
    }

    //if we dont write any void printMsge() in derived class, it will throw us error as the obj dont know which printMsg fucntion to be run.This is the AMBUIGUITY problem in multipleInheritance.
};

int main(){
    //the derived class function overrides the base class functions.
    AB obj;
    obj.printMsg();
}