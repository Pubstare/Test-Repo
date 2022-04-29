//C++ Convert between decimal and binary

#include <iostream>
#include <string>
#include <bits/stdc++.h>
#include <math.h>
#include <sstream>
#include <vector>
#include <algorithm>
 
using namespace std;

// Declares functions
bool isBinary(string stringIn);
int binaryToDec(string stringIn);
int decToBinary(string stringIn);



int input() {

    cout << "Enter Decimal or Binary Value:" << endl;

    string stringIn;
    cin >> stringIn;

    if (stringIn == "exit") {
        exit(0);
    } else if (isBinary(stringIn)) {
        binaryToDec(stringIn);
    } else {
        decToBinary(stringIn);
    }

    return 0;
}



bool isBinary(string stringIn) {
    // Checks if string is binary

    for (int i = 0; i < stringIn.size(); i++) {
        if (stringIn[i] != '1' and stringIn[i] != '0') {
            return false;
        }
    }

    return true;
}



int binaryToDec(string stringIn) {
    cout << " " << endl;
    int out = 0;
    stringstream strm;

    for (int i = 0; i < stringIn.size(); i++) {
        // Adds 'i'th digit to string stream strm
        strm << stringIn[i];

        // Conversion from binary to decimal
        out += stoi(strm.str()) * pow(2,i);

        // Clears the string stream for the next digit
        strm.clear();
        strm.str("");
    }

    cout << "Converted Decimal Value:" << endl;
    cout << out << endl;

    // Creates whitespace between queries
    for (int i = 0; i < 3; i++) {
        cout << " " << endl;
    }

    return 0;
}



int decToBinary(string stringIn) {
    cout << " " << endl;
    cout << "Converted Binary Value:" << endl;
    int val = stoi(stringIn);

    // Vector where remainders from division is stored
    vector<int> binary;
    int quotient = 0;
    
    while (true) {
        // Find quotiend and remainder
        quotient = val / 2;
        binary.push_back(val % 2);

        // Stop looping when division is finished
        val = quotient;
        if (quotient == 0) {
            break;
        }
    }

    // Reverses the order of stored remainders
    reverse(binary.begin(), binary.end());

    // Outputs binary value
    for (int i: binary) {
        cout << i;
    }
    cout << endl;

    // Creates whitespace between queries
    for (int i = 0; i < 3; i++) {
        cout << " " << endl;
    }
    
    return 0;
}



int main() {
    cout << "*Ctrl C to exit*" << endl;
    cout << " " << endl;
    while(true) {
        input();
    }

}

// Compile using:
// g++ filename.cpp -o run -std=c++11

// Run using:
// ./run