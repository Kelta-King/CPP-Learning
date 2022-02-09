#include <iostream>

// Include strings which brings many methods of strings
#include <string>
using namespace std;

int main(){

    string name = "Kushang";
    cout << "The name of person is: " << name << endl;
    cout << "The length of name is: " << name.length() << endl;

    // In substr
    // first parameter is starting index
    // Second parameter is the length of substring. Not the ending index of string
    cout << "Substring explanation: " << name.substr(0,3) << endl;
    cout << "Substring explanation: " << name.substr(2,3) << endl;
    
    return 0;

}