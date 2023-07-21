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

class MyDerivedClass : public MyBaseClass{
    //everyone gonna inherit except the constructor
    //public int x,protected int y
};

void myOutSideFunction(MyBaseClass obj){
        cout << "X: " << obj.x << endl;
        obj.printProtectedData(); //this will print the value of Y
        // cout << "Z: " << obj.z << endl;this will throws error
}
int main(){
        MyBaseClass obj1;
        myOutSideFunction(obj1);
        MyDerivedClass obj2;
        cout << "X: " << obj2.x << endl;

        return 0;
}