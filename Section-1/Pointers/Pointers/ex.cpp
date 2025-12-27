#include<iostream>
using namespace std;
int main(){
    int a = 10;
    int *p;
    p = &a;
    cout << a << endl;
    cout << *p << endl;

    // Accessing the heap memory through the pointers->
    int *B;
    B = new int[5]; // this will give us the allotment of the empty 5 arrays in the heap memory.
    cout << B << endl;
}