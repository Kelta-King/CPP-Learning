#include <iostream>
using namespace std;

int main(){

    int arr[][2] = {
        {1,2},
        {3,4}
    };

    // Getting the length of array
    int len = sizeof(arr)/sizeof(arr[0]);
    for (int i = 0; i < len; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << "Value at " << i << " and " << j << " is: " << arr[i][j] << endl;   
        }
    }
    
    return 0;

}