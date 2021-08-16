/*
 C++ Exercises
 Author: Rayaan Siddiqi
 */
 
// OBJECTIVE: Print the corresponding English word for number inputted


#include <iostream>
using namespace std;

void convertNum();


int main(int argc, const char * argv[]) {
    
    convertNum();
    
    return 0;
}


void convertNum(){
    // n, is a single integer
    string numberWords[9] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    if (n >=1 && n<=9){
        for (int x = 1;x<sizeof(numberWords) + 1;x++){
            if(x == n){
                cout << numberWords[x-1];
            }
        }
    }
    else{
        cout << "Greater than 9";
    }
}

