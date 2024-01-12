#include <cmath>
#include "../headers/converter.h"
// Constructor
Converter::Converter(){
    
}

// Setters

// Getters

// Functionalities
long long int Converter::btd(const string& binary){
    // input
    long long int result = 0;
    long long int SIZE = binary.size();

    // process
    int power = 0;
    for(int index = SIZE-1; index >= 0; index--){
        if (binary[index] == 1 || binary[index] == '1'){
            result += pow(2, power);
        }
        power++;
    }
    // result
    return result;   
}
string Converter::dtb(const long long int& decimal){
    // input
    string result;
    long long int sum = 0;

    // process
    
    
    // result
    return result;
}

// Destructor
Converter::~Converter(){
    
}

/* Logic
BTD:
    Binary = 1010
    Decimal = 

    Convert int to string
    For loop in the string from right to left

*/