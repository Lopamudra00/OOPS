#include<bits/stdc++.h>
using namespace std;
class ComplexNumber{
    private:
        int real, imaginary;

    public:
        ComplexNumber(int r = 0,int i=0){
            real = r;
            imaginary = i;
        }
        void print(){
            cout << real << "+" << imaginary << "i" << endl;
        }

        //operator overloading syntax
        ComplexNumber operator +(ComplexNumber C){
            ComplexNumber temp;
            temp.real = real + C.real;
            temp.imaginary = imaginary + C.imaginary;
            return temp;
        }
};

int main(){
        ComplexNumber comp1(5,7);
        ComplexNumber comp2(2,2);
        ComplexNumber comp3(1,1);
        comp3 = comp1 + comp2; //this is will gives us error.The operator dont directly operates on primitive datatypes
        //comp3 = comp1.add(comp2);
        ComplexNumber comp4;
        comp4 = comp1 + comp2 + comp3;
        comp4.print();
        return 0;
}