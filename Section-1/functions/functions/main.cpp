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
 And the program in which the main function is calling another function which are performing some task is called modular programming
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

 */

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
