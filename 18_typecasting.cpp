#include <iostream>
using namespace std;

int main(){

    int a = 45;
    float b = 87.78;
    string c = "Sample";
    int d = 2;

    // Converting a value to float
    cout << (float)a << endl;

    // Convering a value to float and deviding with int to see output
    cout << (float)a/d << endl;

    // Converting float to int
    cout << (int)b << endl;

    // Following code gives error
    // cout << (string)a << endl;

    return 0;

}