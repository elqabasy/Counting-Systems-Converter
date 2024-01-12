#include <iostream>
#include "headers/app.h"
#include "headers/converter.h"
using namespace std;

int main(){
    try{
        App App("Converter");
        App.run();
    }catch(const exception& ERROR){
        cerr << ERROR.what() << '\n';
    }
    return 0;   
}

/* Functionalities
Convert from binary to decimal
binary to decimal
binary.decimal

*/


