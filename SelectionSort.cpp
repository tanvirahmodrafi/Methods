#include <bits/stdc++.h>

using namespace std;

// Function to perform selection sort on an array
void selectionSort(int arr[], int n) {
    // Iterate through each element of the array
    for (int i = 0; i < n - 1; i++) {
        // Assume the current element is the minimum
        int min = i;
        
        // Find the minimum element in the remaining unsorted portion of the array
        for (int j = i + 1; j < n; j++) {
            if (arr[min] > arr[j]) {
                // Update min index if a smaller element is found
                min = j;
            }
        }
        
        // Swap the found minimum element with the current element
        swap(arr[i], arr[min]);
    }
}

int main() {
    int n;
    cout << "Enter the size of the array" << '\n';
    cin >> n;
    int arr[n];

    cout << "Enter the elements of the array" << '\n';
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    
    selectionSort(arr, n);

    
    cout << "The sorted array is: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << ' ';
    }
    return 0;
}
