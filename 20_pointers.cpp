#include <iostream>
using namespace std;

int main(){

    int a = 99;
    int* ptra = &a;

    // Ways to access value of a
    cout << "Value of a is: " << a << endl;
    cout << "Value of a is: " << *ptra << endl;
    
    // Ways to access address of a
    cout << "Address of a is: " << &a << endl;
    cout << "Address of a is: " << ptra << endl;    

    return 0;

}