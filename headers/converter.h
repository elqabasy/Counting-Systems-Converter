#ifndef COUNTING_SYSTEMS_CONVERTER_CONVERTER_H
#define COUNTING_SYSTEMS_CONVERTER_CONVERTER_H
#include <iostream>
using namespace std;

class Converter{
    public:
        // Constructor
        Converter();

        // Setters

        // Getters

        // Functionalities
        long long int btd(const string& binary);
        string dtb(const long long int& decimal);

        // Destructor
        ~Converter();

};

#endif // COUNTING_SYSTEMS_CONVERTER_CONVERTER_H