#include <iostream>
using namespace std;

// Function to perform insertion sort on an array
void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int current = arr[i]; // Storing the value to compare
        int j = i - 1;
        while (j >= 0 && arr[j] > current) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = current; // Putting the element in the right place
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

    insertionSort(arr, n); // Call the sorting function

    cout << "Sorted array is: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
