/*
 C++ Exercises
 Author: Rayaan Siddiqi
 */
 
// OBJECTIVE: Return the greatest of the four integers.



#include <iostream>
using namespace std;

int max_of_four(int a, int b, int c, int d){
    int arrNums[4];
    arrNums[0] = a;
    arrNums[1] = b;
    arrNums[2] = c;
    arrNums[3] = d;
    
    int maxNum = -1;
    int sizeOfArray = sizeof(arrNums)/sizeof(arrNums[0]);
    for (int x = 0; x<sizeOfArray; x++){
        if(arrNums[x] > maxNum){
            maxNum = arrNums[x];
        }
    }
    
    return maxNum;
}

int main(int argc, const char * argv[]) {
    int a, b, c, d; //user inputs
    int ans = max_of_four(a, b, c, d);
    return 0;
}
