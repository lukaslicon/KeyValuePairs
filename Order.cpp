/*********************************************************************************
* Lukas Licon, llicon
* 2023 Winter CSE101 PA#7
* Order.cpp
* 03/10/2023
* Executable file for Dictionary Functions
*********************************************************************************/
#include "Dictionary.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(int argc, char * argv[]) {

    //open
    ifstream input;
    ofstream output;
    input.open(argv[1]);
    output.open(argv[2]);
    //check 
    if (argc != 3) {
        cerr << "Usage: " << argv[0] << " <input file> <output file>" << endl;
        return(EXIT_FAILURE);
    }
    if (!input.is_open()) {
        cerr << "Unable to open file " << argv[1] << " for reading" << endl;
        return(EXIT_FAILURE);
    }
    if (!output.is_open()) {
        cerr << "Unable to open file " << argv[2] << " for writing" << endl;
        return(EXIT_FAILURE);
    }
    Dictionary dict;
    string line;
    int count = 1;

    //add lines
    while( getline(input, line) )  {
        dict.setValue(line, count++);
    }
    output << dict;
    output << dict.pre_string();

    //close
    input.close();
    output.close();

    return 0;
}
