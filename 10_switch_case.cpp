#include <iostream>
using namespace std;

int main()
{

    int position;
    cout << "Enter your Position:";
    cin >> position;

    // Checking the runner's position in race
    switch (position)
    {
    case 1:
        cout << "You won gold medal";
        break;
    case 2:
        cout << "You won silver medal";
        break;
    case 3:
        cout << "You won bronze medal";
        break;

    default:
        cout << "Thanks for participating in race :-)";
        break;
    }
}