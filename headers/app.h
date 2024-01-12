#ifndef COUNTING_SYSTEMS_CONVERTER_APP_H
#define COUNTING_SYSTEMS_CONVERTER_APP_H
#include <iostream>
#include <algorithm>
#include "../headers/converter.h"
using namespace std;


class App{
    private:
        Converter C1;
        string _input;
        bool _isRunning = false;
        string _name = "App", _description = "Description", _version = "1.0.0";       
    public:
        //  Constructor 
        App(const string& name = "App", const string& description = "Description");

        // Setters
        void setName(const string& name);
        void setVersion(const string& version);
        void setDescription(const string& description);

        // Getters
        string getName();
        string getVersion();
        string getDescription();

        // Functionalities
        void run();
        void cls();
        void help();
        void close();

        // Formatters
        void clear(string& text);
        inline void ltrim(string &s);
        inline void rtrim(string &s);

        // Events 
        void onStart();
        void onClose();
        void onError();
        virtual void onCommand(string& command);

        //  Destructor 
        ~App();
};
#endif // COUNTING_SYSTEMS_CONVERTER_APP_H