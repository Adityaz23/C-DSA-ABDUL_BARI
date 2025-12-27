#include <iostream>
using namespace std;
struct Rectangle
{
    int length;
    int breadth;
};
int main()
{
    Rectangle r = {10, 5};
    Rectangle *p = &r;
    r.length = 25;
    p->length = 40;
    p->breadth = 30;
    cout << "Area of rectangle without any pointers is: " << r.length * r.breadth << endl;
    cout << "Area of rectangle with pointers using in structure is: " << p->length * p->breadth << endl;
    // Area of rectangle without any pointers is: 1200
    // Area of rectangle with pointers using in structure is: 1200
    // will get this value cause in the end after using the pointer the struct value of the r -> is going to the p->length and same to the breadth. thats why both outputs will be same
}