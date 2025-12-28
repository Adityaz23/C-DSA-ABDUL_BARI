//  Parameter Passing ->
// a. Pass by value.
// b. Call by address.
// c. Call by reference.

#include <iostream>
using namespace std;
// To make your code pass by value it just mean passing one variable value to the other variable using the pass by value function
void pass_by_value(int c, int d)
{
    int tem;
    tem = c;
    c = d;
    d = tem;
};
// this right here is the call by refernce -> cause we are using the &x and &y so the value will be swapped in the main memory.

void swap(int &x, int &y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
}
// Now, we will use the call by address parameter passing method ->
void call_by_address(int *g, int *h)
{
    int te;
    te = *g;
    *g = *h;
    *h = te;
};
int main()
{
    int a=10, b=20;
    int e = 30;
    int f = 40;
    int i = 50;
    int j = 60;
    // a = 10;
    // b = 20;
    swap(a, b);
    cout << "This is the pass pass by refernce where we used &x and &y to give the variable value to the other variables like x value goess to a and y value goes to b: " << a << " " << b << endl;
    pass_by_value(e, f);
    cout << "This is the code where we are using the pas by value function which is just passing the variable value of c to e and value of variable d to the f: " << e << " " << f << endl;
    call_by_address(&i, &j);
    cout << "This is the call by address function paramter where we are getting the address to be swapped: " << i <<" " << j << endl;
}