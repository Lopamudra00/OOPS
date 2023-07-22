//in order to resolve the diamond problem..

#include<bits/stdc++.h>
using namespace std;
class Base{
    protected:
        int val;
};
class Derived1 :virtual public Base{
    public:
    Derived1(){
        val = 1;
    }
    void getValue(){
        cout << "Derived 1 value of datamember is :" << val;
    }
};
class Derived2 :virtual public Base{
    public:
    Derived2(){
        val = 2;
    }
    void getValue(){
        cout << "Derived 2 value of datamember is :" << val;
    }
};
class Derived3 : public Derived1,public Derived2{
    public:
    void getValue(){
        cout << "Int value is:";
        Derived1::getValue();
    }
    //rightmost value will get printed , i.e. derived class 2
};
//if we want only one option in derived 3. we need to use virtual keyword in derived class 1 and derived class 2. The compiler supposed to understand only one copy need to send to derived class3.
int main(){
    Derived3 obj;
    obj.getValue();
}