#include <iostream>
using namespace std;
int main()
{
    int a = 10;
    int &r = a;
    cout << "This is the value of a before going to the r refernce: " << a << endl;
    r++;
    cout << "This is the value of the r: " << r << endl;
    cout << "The new value of the a is: " << a << endl;
    // This is the value of a before going to the r refernce: 10
    // This is the value of the r: 11
    // The new value of the a is: 11
}