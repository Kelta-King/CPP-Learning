#include <iostream>
using namespace std;

int main(){

    int age;
    cout << "Please enter your age: ";
    cin >> age;

    // Is age greter than 150 or less than 1 then it must be invalid
    if(age > 150 || age < 1){
        cout << "Invalid age";
    }

    // If age is greater than 18 then eligible to vote
    else if(age >= 18){
        cout << "You are eligible to vote";
    }

    // Else not eligible to vote
    else{
        cout << "You are not eligible to vote";
    }

}