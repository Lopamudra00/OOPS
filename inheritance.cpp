#include<bits/stdc++.h>
using namespace std;

//base class
class Shape{
    protected:
        int width;
        int height;
    public:
        void setWidth(int w){
            width = w;
        }
        void setHeight(int h){
            height = h;
        }
};

//Rectangle is the child of Shape(derived class)
class Rectangle: public Shape{
    public:
        int getArea(){
            return (width * height);
        }
};

int main(){
        Rectangle Rect;
        Rect.setWidth(5);
        Rect.setHeight(7);
        cout << "Total area: " << Rect.getArea() << endl;
}