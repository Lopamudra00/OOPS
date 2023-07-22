//same function name but different parameters

#include<bits/stdc++.h>
using namespace std;
class Animal{
    public:
    void makeSound(){
        cout << "Animals sound";
    }
};

class Dog : public Animal{
    public:
//     void makeSound(){
//         cout << "Dog barks!";
//     }
};

class Cat : public Animal{
    public:
    void makeSound(){
        cout << "Cats meow";
    }
};
int main(){
    Animal a1;
    a1.makeSound();
    cout << endl;
    Dog d1;
    d1.makeSound();
    cout << endl;
    Cat c1;
    c1.makeSound();

    return 0;
}