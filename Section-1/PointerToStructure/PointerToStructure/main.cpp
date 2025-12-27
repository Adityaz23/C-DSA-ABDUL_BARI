//
//  main.cpp
//  PointerToStructure
//
//  Created by Adityaz on 24/11/25.
//

#include <iostream>
using namespace std;

struct Rectangle {
    int len;
    int bre;
};
struct Rectangle *p;
int main(){
    Rectangle r={12,24};
    r.len = 321;
    Rectangle *p=&r;
    p->len=23; // this is the syntax for accessing the structure using pointer.
    p->bre=25;
    cout << &r << " " << p << endl; // this will just give us the syntax.
    cout << new int(sizeof(Rectangle)) << endl; // this will give us the heap memory.
    // creating it in the heap memory.
    p = new Rectangle;
    p->len = 12;
    p->bre = 23;
    cout << p->len << endl;
    cout << p->bre << endl;
    return 0;
}
