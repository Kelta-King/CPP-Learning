#include <iostream>
using namespace std;

int main(){

    int age;
    cout << "Please enter your age: ";
    cin >> age;

    // If age is greater than 18
    if(age >= 18){
        
        // Is age greter 150 it must be invalid
        if(age > 150){
            cout << "Invalid age";
        }
        else{
            cout << "Eligible to vote";
        }

    }

    // Else not eligible to vote
    else{
        cout << "You are not eligible to vote";
    }
    
    return 0;

}