#include <bits/stdc++.h>
using namespace std;

// Function to perform counting sort on an array
void countingSort(int a[], int n) {
    int max = INT_MIN;
    for (int i = 0; i < n; i++) {
        if (max < a[i]) {
            max = a[i];
        }
    }

    int arr[max + 1];
    for (int i = 0; i < max + 1; i++) {
        arr[i] = 0;
    }

    for (int i = 0; i < n; i++) {
        arr[a[i]]++;
    }

    int i = 0, j = 0;
    while (i < max + 1) {
        if (arr[i] > 0) {
            a[j++] = i;
            arr[i]--;
        } else {
            i++;
        }
    }
}

int main() {
    int n;
    cout << "Enter the size of the array" << '\n';
    cin >> n;
    int a[n];

    cout << "Enter the elements of the array" << '\n';
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    countingSort(a, n); // Call the counting sort function

    cout << "Sorted array is: ";
    for (int i = 0; i < n; i++) {
        cout << a[i] << ' ';
    }

    return 0;
}
