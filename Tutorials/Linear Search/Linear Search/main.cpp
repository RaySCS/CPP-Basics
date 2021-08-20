//
//  main.cpp
//  Linear Search
//
//  Created by Rayaan Siddiqi 
//

#include <iostream>
using namespace std;

int linearSearch(int array[], int size, int searchValue){
    for (int i=0;i<size;i++){
        if(searchValue == array[i]){
            return i;
        }
    }
    return -1; //indication that we didn't find search value
}


int main(int argc, const char * argv[]) {
    // insert code here...
    int arr[] = {15, 23, 7, 45, 87, 16};
    
    int userValue;
    
    cout << "Enter the integer you want to look for: "<<endl;
    cin>> userValue;
    
    int result = linearSearch(arr, 6, userValue);
    
    if(result >=0){
        cout<<"The search value was found at index: " << result << endl;
    }
    else{
        cout<<"The value was not found";
    }
    
    return 0;
}
