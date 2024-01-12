#include <string>
#include "../headers/app.h"
#include "../headers/constants.h"
namespace LIM = constants::limits;


//  Constructor 
App::App(const string& name, const string& description){
    this->setName(name);
    this->setDescription(description);
}

// Setters
void App::setName(const string& name){
    // validate name then set it 
    this->_name = name;

}
void App::setDescription(const string& description){
    this->_description = description;
}

// Getters
string App::getName(){
    return this->_name;
}
string App::getDescription(){
    return this->_description;
}

// Functionalities
void App::run(){
    this->_isRunning = true;

    this->onStart();

    while (this->_isRunning){
        cout << this->_name << "> "; getline(cin, this->_input);

        // Direct the commands
        onCommand(_input);

    }

    this->onClose();
    
}
void App::close(){
    this->_isRunning = false;
}
void App::help(){
    cout << "Help" << constants::LINE;
    cout << constants::TAB << "This help command for show, display help option and how to use it. " << constants::LINE;
    cout << constants::LINE;
}

void App::cls(){
    system("cls");
}
// Formatters
inline void App::ltrim(string &text) {
        text.erase(text.begin(), find_if(text.begin(), text.end(), [](unsigned char ch) {
            return !isspace(ch);
        }));
    }

// trim from end (in place)
inline void App::rtrim(string &text) {
    text.erase(find_if(text.rbegin(), text.rend(), [](unsigned char ch) {
        return !isspace(ch);
    }).base(), text.end());
}

void App::clear(string& text){
    // trim
    this->rtrim(text);
    this->ltrim(text);
    
    // lower case
    transform(text.begin(), text.end(), text.begin(), ::tolower);

    // and so on.
}
// Events 
void App::onStart(){
    this->cls(); // for windows but make thing or update to make it COMP. with other OS.
    string message = "Welcome to " + this->_name + " Version " + this->_version;
    cout << message << constants::LINE;
}
void App::onClose(){
    
}
void App::onError(){
    string message = "Unhandled Error: Please check your input and Try again.";
    cout << message << constants::LINE;
}
void App::onCommand(string& command){
    // Format command
    this->clear(command);

    // contains
    if(command.contains("exit")){
        this->close();
    }else if(command.contains("help")){
        this->help();
    }else if(command.starts_with("cls") || command.starts_with("clear")){
        this->cls();
    }else if(command.starts_with("btd") || command.starts_with("todecimal")){
        string input; 
        cout << "Binary> "; getline(cin, input);
        cout << "Decimal> " << C1.btd(input) << constants::LINE;
    }else{
        string message = "Unhandled Command, Please check your input and Try again.";
        cout << message << constants::LINE;
    }
}

//  Destructor 
App::~App(){
    
}