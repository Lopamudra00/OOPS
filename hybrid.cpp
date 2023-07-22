#include<bits/stdc++.h>
using namespace std;
class Base{
    protected:
        int val;
};
class Derived1 :public Base{
    public:
    Derived1(){
        val = 1;
    }
};
class Derived2 :public Base{
    public:
    Derived2(){
        val = 2;
    }
};
class Derived3 : public Derived1,public Derived2{
    //2 copies of val in Derived3. (from 1 and 2) . This is called Diamond problem
    public:
    void getValue(){
        cout << "Int value is: " <<val; //here it will give error.
    }
};