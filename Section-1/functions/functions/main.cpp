//
//  main.cpp
//  functions
//
//  Created by Adityaz on 25/11/25.
//

// In this video we are going to learn about the functions for that we will
/*
    1. What are functions?
    2. Parameter Passing ->
        a. Pass by value.
        b. Pass by address.
        c. Pass by reference.
 
    Q. What are functions?
    Ans. Functions are the piece of code which performs the specific tasks. Functions is a group of instruction. So grouping instructions is a function. Functions are called as modules or procedures.
 The main function which are not divided in the different different small functions or just a big block of code is called monolithic programming.
 And the program in which the main function is calling another function which are performing some task is called modular programming or procedural programming.
 #include <iostream>
 using namespace std;
 // Creating the first example of the function ->
 int ex1(){
     int a = 12;
     int b = 13;
     int c = a+b;
     return c;
 }
 int main(){
    cout << ex1() << endl;
     return 0;
 }
 This type of programming style also increases the chances of the reusability.

 */

#include <iostream>
using namespace std;
// Creating the first example of the function ->
//int ex1(){
//    int a = 12;
//    int b = 13;
//    int c = a+b;
//    int d = a - b;
//    int e = c + d;
//    return e;
//}
int add(int a, int b){
    int c = a+b;
    return c;
}
int sub(int a , int b){
    int c = b-a;
    return c;
}
int mul(int a , int b){
    int c = a*b;
    return c;
}
int Div(int a , int b){
    int c = b/a;
    return c;
}
int main(){
    int x,y,z,j,g,i;
    x = 10;
    y = 20;
    z = add(x,y);
    j = sub(x,y);
    g = mul(x,y);
    i = Div(x, y);
    cout << z << endl;
    cout << j << endl;
    cout << g << endl;
    cout << i << endl;
    return 0;
}
