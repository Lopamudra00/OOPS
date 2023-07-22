#include<bits/stdc++.h>
using namespace std;
class MyClass{
    public:
        int x;
        static int cnt;
        MyClass(){
            cnt++;
        }
};
int MyClass::cnt = 0;
int main(){
    //we donot need an object to access the static datsamember
        cout << "Inital count: " << MyClass::cnt << endl;
        MyClass obj1,obj2;
        cout << "count after two object: " << MyClass::cnt; //2 will be the output because the default constructor runs 2 times
        return 0;
}