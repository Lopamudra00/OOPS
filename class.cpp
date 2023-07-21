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
            cout << "Car Company Model " << model_name<<endl;
            cout << "Car Fuel Type " << fuel_type<<endl;
            cout << "Car Mileage " << mileage<<endl;
            cout << "Car Price " << price << endl;
        }
};

int main(){
    Cars car1;// objects are nothing but variables of type class
    car1.setData("Toyota", "altis", "petrol", 15.5, 1500000);
    car1.displayData();
}