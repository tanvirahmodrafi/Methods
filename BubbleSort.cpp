#include <iostream>
#include <climits> // for INT_MIN
using namespace std;

// Function to perform bubble sort on an array
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) { // n - i - 1: because in each loop the last element is sorted.
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j]; // saving the value.
                arr[j] = arr[j + 1]; // swapping the value with bigger elements.
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int n;
    cout << "Enter the size of array" << '\n';
    cin >> n;
    int arr[n];

    cout << "Enter the elements" << '\n';
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    bubbleSort(arr, n); // Call the sorting function

    cout << "Sorted array is: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
