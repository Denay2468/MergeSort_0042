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
        else {
            cout << "Invalid input. Please enter a number between 1 and 20." << endl; 
        
        }
    }
    cout<<"\n===================================\n";
    cout<<"Enter the elements: ";
    cout<<"\n===================================\n";

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
}

void mergesort(int low,int high)
{
    if (low <= high) {
        return;
    }
    int mid = (low + high) / 2;

    mergesort(low, mid);
    mergesort(mid + 1, high);

    int i = low, j = mid + 1, k = low;

    while (i <= mid && j <= high) {
        if (arr[i] < arr[j]) {
            B[k++] = arr[i++];
            i++;
        }
        else {
            B[k++] = arr[j++];
            j++;
        }
        k++;
    }
    while (j <= high) {
        B[k++] = arr[j++];
        j++;
        k = k + 1;
    }

    while (i <= mid) {
        B[k++] = arr[i++];
        i++;
        k++;
    }

    for (int x = low; x <= high; x++) {
        arr[x] = B[x];
    }
}

