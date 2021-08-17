/*
 C++ Exercises
 Author: Rayaan Siddiqi
 */
 
// OBJECTIVE: You will be given an array of N integers and you have to print the integers in the reverse order.


#include <iostream>
using namespace std;

void performReverse();

int main(int argc, const char * argv[]) {
    performReverse();
    
    return 0;
}

void performReverse(){
    int n;
    cin >> n;
    int numArry[n];
    for (int x = 0; x<n;x++){
        int currentNum;
        cin >> currentNum;
        numArry[x] = currentNum;
    }
    //original array has be constructed
    
    for (int y = n - 1; y>=0; y--){
        // handles printing out reversed elements of arrays
        cout << numArry[y] << " ";
    }
}

https://img.shields.io/badge/Website-3b5998?style=flat-square&logo=google-chrome&logoColor=white
