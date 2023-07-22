//static member functions have a class scope and they do not have access to the THIS pointer

#include<bits/stdc++.h>
using namespace std;
class MyClass{
    private:
        int x;
        static int count;
    public:
        MyClass(){
            count++;
        }

        static int getCount(){
            return count; //count is a static variable
        }
};
int MyClass::count = 0;
int main(){
        cout << "Initial count: " << MyClass::getCount() << endl;
        MyClass obj1, obj2;
        cout << "Count after 2 objects: " << MyClass::getCount() << endl;
        //here we have used member functions to access the private part.
        return 0;
}