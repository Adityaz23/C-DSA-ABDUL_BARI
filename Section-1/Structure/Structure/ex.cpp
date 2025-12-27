#include<iostream>
using namespace std;
struct Rectangle
{
    int length;
    int breadth;
};

int main(){
    Rectangle r = {10,5};
    cout << "Area of rectangle: " << r.length * r.breadth << endl;
    return 0;
}