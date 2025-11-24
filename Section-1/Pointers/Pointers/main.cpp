//
//  main.cpp
//  Pointers
//
//  Created by Adityaz on 24/11/25.
//
/* Pointers -> They are the address variable that is meant to store the address of the data.
    Normal data types are data variable but the pointers are the address variables.
    Pointers are used for indirectly accessing the data.
 Q. Why we need pointer?
 Ans. We need pointers to access the heap memory in our main memory.
 Pointers can be used to access the input by the keyboard mouse.
 one major use case of the pointer is to acceessing the resources outside of the program.
 */

#include <iostream>
#include<stdlib.h>
using namespace std;//int main(){
//    cout << "HEllo";
//    int a;
//    int *p; // this is the decalration of the pointer.
//    p = &a; // this is to get the target of the variable a which is getting pointed by the variable p which is the pointer. p will also occupy the memory.
//    cout << a << endl; // this will give the default value of 1 in the heap memory.
//    cout << *p << endl; // now this is the address of the variable a value. This line is the derefrencing.
    // Q. How to get memory in heap?
    // Ans. The answer is to use the malloc function in the c. In c++ we use the new and delete keyword.
    // Practising Pointer ->

struct Rectangle{
    int len;
    int bre;
};


int main(){
    int a = 10;
    int *p;
    p = &a;
    cout << *p << endl; // this line will give us the value of the pointer which p variable is storing.
    cout << p << " " << &a << endl; // this will give us the address of that stack memory.
    // both p and &a have the same address cause they are pointing towrd the same memory point.
    
    // NOw for the array ->
    int A[5]= {1,2,3,4,5};
    int *i;
    i = A; // you do not need to give & to the array element.
    for (int b=0; b<5; b++) {
        cout << p[b] << endl;
    }
    // this will give us the all elements of the array. Array is created inside the stack.
    // Now for the heap memory.
    int *d; // this is inside the stack
    d = (int *)malloc(5*sizeof(int)); // this is created inside the heap.
    d[0] = 10; d[1]=123;d[2]= 12;d[3]=1;d[4]=1341; // this is the array which is directly generated in the heap memory.
    for (int j=0; j<5; j++) {
        cout << d[j] << endl;
    }
    free(d); // same for the c language.
    // the above method is c language sytanx.
    
    // Now the c++ method =>
    int *c;
    c = new int[5];
    c[0]=12;c[1]=11;c[2]=14;c[3]=134;c[4]=1241;
    for (int k=0; k<5; k++) {
        cout << c[k] << endl;
    }
    // once we have finished using the heap memory we have to write the delete[] keyword to stop the program from taking the memory.
    delete [] c;

    int *d1;
    char *d2;
    string *d3;
    float *d4;
    Rectangle *d5;
    cout << sizeof(d1) << " " << sizeof(d2) << " " << sizeof(d3) << " " << sizeof(d4) << " " << sizeof(d5) << endl;
    // every pointer takes smae amount of memory whatever the type of memory.
    
    // Reference ->
    /*
     int main(){
     int a = 10;
     int &r=a; in the refrence we need to give the value of the reference value just when we are initialising it.
     cout << a;
     r++;
     cout << a; this will also 11;
     same with the
     cout  << r same value from the 10 to 11.
     }
     */
    int e = 12;
    int &r = e;
    cout << e << endl;
    cout << r << endl;
    r++; // this will increase the value of the r and also the value of the e because they are reference variaable to each other.
    cout << r << endl;
    cout << e << endl;
    return 0;
    // a reference does not comsume memory.
}
