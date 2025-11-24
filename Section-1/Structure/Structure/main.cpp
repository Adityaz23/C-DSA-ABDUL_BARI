//
//  main.cpp
//  Structure
//
//  Created by Adityaz on 19/11/25.
//
/*
    Structures are used to declare our own data types. There are also known as collection of similar data types items in one name.
    They are used for define the user define data types apart from primitive data types.
    To define the structure you need to define it with the struct keyword.
    They are also stored in the stack memory of your main memory.
 */
#include <iostream>
using namespace std;
struct Rectangle{
    int len ;
    int bre ;
};
struct Student {
    char add[5];
    char name[12];
    int rollno;
    char dept;
};
struct Card{
    int face;
    int color;
    int shape;
};
int main(){
//    int a = 12;
//    cout << a << endl;
//    int B[5] = {1,2,4}; // so in this there are only 3 elemnts in the array of size 5 so the cpp compiler will add the two 0,0.
//    for(int x: B){
//        cout << x << endl;
//    }
    // this is the declaration of the struture rectangle.
    Rectangle r{10,5}; // this is the intialisation+decalration.
    // Q. Now how to access the members ->
    // Ans. Use the value of the struct.
    r.len = 12; // this will update the value of the len from 10 to 12.
    r.bre = 23; // same for the breadth.
    cout << "Area of recatngle is : " << r.len * r.bre << endl;
    cout << sizeof(r) << endl;
    struct Student s = {"ind","Aditya",21,'D'};
    s.rollno = 103; //updating the value of the rollno.
    cout << "The details of the student are: " << s.name << " " <<  s.add << " " <<  s.dept  << " " <<   s.rollno  << endl;
    // the below struct will form the array of structure and will contain the size of each byte of 52 cards.
//    struct Card deck[52];
    return 0;
}
