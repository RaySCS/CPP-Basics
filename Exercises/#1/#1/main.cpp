/*
 C++ Exercises
 Author: Rayaan Siddiqi
 */

// OBJECTIVE: Print the sum of the three numbers on a single line.

#include <iostream>
using namespace std;


void handleSum();

int main(int argc, const char * argv[]) {
    // insert code here...
    handleSum();
    return 0;
}


void handleSum(){
    int x, y, z;
    cin >> x;
    cin >> y;
    cin >> z;
        
    cout << x+y+z;
}
