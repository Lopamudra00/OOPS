#include<bits/stdc++.h>
using namespace std;

//function overloading
// int add(int x,int y){
//     return (x + y);
// }
// float add(float x,float y){
//     return (x + y);
// }
// double add(double x,double y){
//     return (x + y);
// }

template <typename T>
T add(T x, T y){
    return (x + y);
}

int main(){
    cout << "Addition of 2 integers 3 and 4 is: " << add<int>(3, 4) << endl;
    cout << endl;
    cout << "Addition of 2 integers 3.2 and 4.6 is: " << add<float>(3.2, 4.6);
    return 0;
}