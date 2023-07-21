#include<bits/stdc++.h>
using namespace std;
class ComplexNumber{
    private:
        int real;
        float imaginary;
    public:
    ComplexNumber(){

    }
    ComplexNumber(int r, float i){
        real = r;
        imaginary = i;
    }
    void displayData(){
        cout << "Complex number is: " << real << " + " << imaginary << "i" << endl
             << endl;
    }

    int getReal(){
        return real;
    }
    float getImaginary(){
        return imaginary;
    }
};

ComplexNumber add2Number(ComplexNumber n1,ComplexNumber n2){
    int r;
    float i;
    r = n1.getReal() + n2.getReal();
    i = n1.getImaginary() + n2.getImaginary();
    ComplexNumber temp(r, i);
    return temp; //returning Object
}

int main(){
    ComplexNumber comp1(5, 7);
    ComplexNumber comp2(2, 3);
    ComplexNumber comp3;
    comp1.displayData();
    comp2.displayData();
    cout << "Addition of comp1,comp2" << endl;
    comp3 = add2Number(comp1, comp2);
    comp3.displayData();

    cout << "Pointer to object" << endl;
    ComplexNumber *ptr1; // Here ComplexNumber is acting as a datatype for pointer ptr1;
    ptr1 = &comp3; //now this pointer can be point to comp3 since this comp3 is a type of ComplexNumber
    ptr1->displayData();

    ptr1 = &comp2;
    ptr1->displayData();
    cout << ptr1;
    return 0;
}