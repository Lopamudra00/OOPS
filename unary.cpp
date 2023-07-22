#include<bits/stdc++.h>
using namespace std;
class Weight{
    private:
        int kg;
    public:
        Weight(){
            kg = 0;
        }

        Weight(int x){
            kg = x;
        }
        void print(){
            cout << "Weight in KG: " << kg << endl;
            
        }
        //pre increment operator
        void operator ++(){
            ++kg;
        }
        //post increment operator
        void operator ++(int){
            kg++;
        }

        //pre decrement opeartor
        void operator --(){
            --kg;
        }

        //post decremenet operator
        void operator --(int){
            kg--;
        }

};
int main(){
        int x = 0;
        ++x;
        cout << x << endl;
        Weight obj;
        obj.print();
        ++obj;
        obj.print();
        //++obj; //this will throw an error. we need to define this user define funtion.
        obj++;
        //obj.operator ++()
        obj.print();

        --obj;
        obj.print();
        obj--;
        obj.print();
        return 0;
}