#include <iostream>
using namespace std;

int sum(int a, int b){
    return a+b;
}

int main(){

    int a = 4, b = 3;
    cout << "Sum of " << a << " and " << b << " are: " << sum(a, b);
    
}