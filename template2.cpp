#include<bits/stdc++.h>
using namespace std;
template <typename T>
class Weight{
    private:
        T kg;
    public:
        void setData(T x){
            kg = x;
        }
        T getData(){
            return kg;
        }
};

int main(){
        Weight <int> obj1;
        obj1.setData(5);
        cout << "Value is : " << obj1.getData();
        cout << endl;
        Weight<double> obj2;
        obj2.setData(5.34443);
        cout<<"Value is : " << obj2.getData();
        return 0;
}