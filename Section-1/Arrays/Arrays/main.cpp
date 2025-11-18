//
//  main.cpp
//  Arrays
//
//  Created by Adityaz on 18/11/25.
//

#include <iostream>
using namespace std;
int main() {
    // insert code here...
    //    int A[10] = {1,2,3,4};
    //    int B[10] = {0};
    //    for (int i=0; i<=10; i++) {
    //        cout << A[i] << " " << endl;
    //    }
    // using for each loop to access all the elements in the array.
    //    for(int x: A){
    //        cout << x << endl;
    //    }
    int n;
    cout << "Enter the size of an array: ";
    cin >> n;
    int A[n];
    A[0] = 3;
    for(int x: A){
        cout << x <<  endl;
    }
   
//    printf("%d\n",A[2]); // We can also use the print f function in the cpp language.
//    cout << B << endl;
    return 0;
}
