//
//  main.cpp
//  Dynamic Memory Allocation
//
//  Created by Rayaan Siddiqi
//

/*
 Dyanmic Memory Allocation allows you to set an array size dynamically during run time rather than at compile time. Helpful when program doesn't know about the number of items in advance which must be stored. Helps save memory!
 */

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int size;
    int* ptr;
    
    cout<<"Enter the size of the array: "<<endl;
    
    cin>>size;
    
    ptr = new int[size];
    
    cout<<"Enter the values to be stored in array"<<endl;
    
    for(int x=0;x<size;x++){
        cin>>ptr[x];
    }
    
    cout<<"values in array below"<<endl;
    for(int x=0;x<size;x++){
        cout<<ptr[x]<<endl;
    }
    
    return 0;
}
