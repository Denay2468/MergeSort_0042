#include <iostream>
using namespace std;

int arr[20] , B[20];

int n;

void input()
{
    while (true
    ) {
        cout << "Enter the number of elements (1-20): ";
        cin >> n;
        if (n <= 20) {
            break;
        }
        cout << "Invalid input. Please enter a number between 1 and 20." << endl;
    }
}

