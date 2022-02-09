#include <iostream>
using namespace std;

int main(){

    int arr[] = {1,2};

    // Getting the length of array
    int len = sizeof(arr)/sizeof(arr[0]);
    for (int i = 0; i < len; i++)
    {
        cout << "Value at " << i << " is: " << arr[i] << endl;
    }

}