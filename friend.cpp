//friend function are not member function
//operator overloading can be done through friend function

#include<bits/stdc++.h>
using namespace std;

class Distance{
    private:
        int meters;
    public:
        Distance(){
            //default constructor 
            meters = 0;
        }

        void displayData(){
            cout << "Meters Value: " << meters;
        }
        //prototype
        friend void addValue(Distance &d);
};
// addValue is a outside function . Now it can access the private data members
void addValue(Distance &d){
        d.meters = d.meters + 5;
}

int main(){
        Distance d1;
        d1.displayData(); //output is 0, as default constructor is been called
        cout << endl;
        addValue(d1);//pass by refernce. we called this function without any object because it is an independent function ,(i.e. it is present outside the class) so it doesnt require any object to call it.
        d1.displayData(); // output is 5 since it has been incremented to 5;
        return 0;
}