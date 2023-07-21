#include<bits/stdc++.h>
using namespace std;

class Cars{
    private:
        //data members or member variables
        string company_name;
        string model_name;
        string fuel_type;
        float mileage;
        double price;

    public:
        // default constructor: when a object is created,it is called
        Cars(){
            company_name = "Toyota";
            cout << "DEFAULT CONSTRUCTOR CALLED" << endl;
        }

        //parameterised constructor
        Cars(string mname,string ftype,float m,double p){
            cout << "parameterized constructor called" << endl;
            model_name = mname;
            fuel_type = ftype;
            mileage = m;
            price = p;
        }

        //copy constructor: we have to pass the object of same data type
        Cars(Cars &obj){
            cout << "copy constructor called" << endl;
            company_name = obj.company_name;
            model_name = obj.model_name;
            fuel_type = obj.fuel_type;
            mileage = obj.mileage;
            price = obj.price;
        }

        //member functions
        void setData(string cname,string mname,string ftype,float m,double p){

            company_name = cname;
            model_name = mname;
            fuel_type = ftype;
            mileage = m;
            price = p;
        }

        void displayData(){
            cout << "Car Properties :" <<endl<<endl;
            cout << "Car Company Name: " << company_name << endl;
            cout << "Car Company Model : " << model_name<<endl;
            cout << "Car Fuel Type : " << fuel_type<<endl;
            cout << "Car Mileage : " << mileage<<endl;
            cout << "Car Price : " << price << endl;
        }

        //destructor : destroy the objects.Use for deallocation of memory
        ~Cars(){
            cout << "destructor called" << endl;
        }
};

int main(){
        Cars car1;//default
        Cars car2("fortuner", "diesel", 10, 1500000); // parameter
        Cars car3 = car1;//copy constructor
        car1.displayData();
        car2.displayData();
        car3.displayData();
}
