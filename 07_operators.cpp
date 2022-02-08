#include <iostream>
using namespace std;

// Main method, entry of code
int main() {
    
    int a = 4;
    int b = 3;

    // Arithmetic operators
    cout << "a+b: " << a+b << endl;
    cout << "a-b: " << a-b << endl;
    cout << "a*b: " << a*b << endl;
    cout << "a%b: " << a%b << endl;
    
    // Answer will be int due to 2 integer
    cout << "a/b: " << a/b << endl;

    // Answer will be in decimals because of type casting
    cout << "a/b with type casting: " << (float)a/b << endl;

    // Float and int devision
    float c = 4.5;
    cout << "Decimal devision: " << c/b << endl;


    // Logical operators
    cout << "1 || 0 : " << (1 || 0) << endl;
    cout << "1 || 1 : " << (1 || 1) << endl;
    
    cout << "1 && 0 : " << (1 && 0) << endl;
    cout << "1 && 1 : " << (1 && 1) << endl;

    // Comparision operators
    cout << "34 > 56 : " << (34 > 56) << endl;
    cout << "34 <= 56 : " << (34 <= 56) << endl;
    cout << "34 == 56 : " << (34 == 56) << endl;

    return 0;
}
