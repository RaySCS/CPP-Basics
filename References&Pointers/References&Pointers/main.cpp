//
//  main.cpp
//  References&Pointers
//
//  Created by Rayaan Siddiqi on 7/15/21.
//

#include <iostream>
using namespace std;

void referenceFunction();

void pointerFunction();

int main(int argc, const char * argv[]) {
    referenceFunction();
    pointerFunction();
    return 0;
}

void pointerFunction(){
    // A pointer is a variable that stores the memory address of a variable as its value
    
    string myName = "Rayaan";
    string* myNamePointer = &myName;
    
    cout << myNamePointer << "\n";
}
void referenceFunction(){
    // A reference variable is a "reference" to an existing variable, and it is created with the & operator:
    
    string myName = "Rayaan";
    string &myNameReference = myName;
    
    cout << myNameReference << "\n"; // Outputs Rayaan
    
    
    // We can also use the & operator in order to get the memory address of a variable
    
    cout << &myName << "\n"; //Outputs 0x7ffeefbff368
}
