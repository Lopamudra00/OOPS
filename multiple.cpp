//in order to remove ambigyuity ...we can use scope resolution operation to resolve the ambiguity.
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
        A::printMsg(); // the function from base class A has been called.
        B::printMsg();
        cout << "Class AB printMsg()" << endl;
    }

};

int main(){
    AB obj;
    obj.printMsg();
}