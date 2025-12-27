//
//C and C++ concepts :-
//In this video we are going to discuss the basic of the arrays, strucutre, pointers, refrence, parameter passing, constructor classes and templates.
//Q. What are Arrays?
//Ans. Arrays are define as collection of similar data elements.
//Ex:- int A[5];   A=[0,1,2,3,4]  A[0]= 12, A[1]= 13 this is how you can store the value inside the arrays.
//
//int main(){
//int A[5]; this will generate the array or empty array of 5 elements. This is the decalration of the array.
//int B[5] = [1,2,3,4,5]; This is the array in which the value has been intitalised.
//now how to print all the element of the array ->
//int i ; intialise the integer
//use for loop
//for(int i=0; i<=5; i++){
//printf("%d", B[i]); This will print the whole value of the array B[1].
//}
//}
//Now, this program will be stored in the main memory and the main memory is divided into three sections -> Code Section, Stack Section and Heap Section. So, when you declare the value of the array or decalre the array it is stored in the stack
//For loop is used to print all the elements of the array.
#include<iostream>
using namespace std;
void fun(int A[], int n){
    int i;
    for(i=0;i<n;i++)
        cout << A[i] << endl;
}
int main(){
    int A[5] = {1,2,3,4,5};
    fun(A,5);
}