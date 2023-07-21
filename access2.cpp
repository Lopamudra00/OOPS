#include<bits/stdc++.h>
using namespace std;
class MyBaseClass{
    public:
        int x;
        //constructor
        MyBaseClass(){
            x = 5;
            y = 5;
            z = 5;
        }
        void printProtectedData(){
            cout << "Y: " << y << endl;
        }
    protected:
        int y;
    private:
        int z;
};

class MyDerivedClass : protected MyBaseClass{
    
};

class MyDerivedClass2 : public  MyDerivedClass{
};

void myOutSideFunction(MyBaseClass obj){
        cout << "X: " << obj.x << endl;
        obj.printProtectedData(); 
}
int main(){
        MyBaseClass obj1;
        myOutSideFunction(obj1);
        MyDerivedClass2 obj2;
        cout << "X: " << obj2.x << endl; //this will throe an error

        return 0;
}