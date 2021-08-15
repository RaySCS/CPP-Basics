//
//  main.cpp
//  Files
//
//  Created by Rayaan Siddiqi on 7/16/21.
//

#include <iostream>
#include <fstream>
using namespace std;


int main(int argc, const char * argv[]) {
    // insert code here...
    
    ofstream MyFile("firstFile.txt"); //Creating a new text file
    
    MyFile << "This is text I am writing in the file";
    
    MyFile.close(); //Close the text file
    
    string textFileText; //hold output
    
    ifstream MyReadFile("firstFile.txt"); // Reading from text file
    
    while (getline (MyReadFile, textFileText)){
        //While loop + getline() function to read file line by line
        cout << textFileText << "\n";
    }
    
    MyReadFile.close();
    return 0;
}
