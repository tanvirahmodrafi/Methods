#include <iostream>
using namespace std;


void conquer(int arr[], int si, int mid, int ei) {
    int *merged = new int[ei - si + 1];
    int i = si, j = mid + 1, k = 0;

    while (i <= mid && j <= ei) {
        if (arr[i] <= arr[j]) {
            merged[k++] = arr[i++];
        } else {
            merged[k++] = arr[j++];
        }
    }

    while (i <= mid) {
        merged[k++] = arr[i++];
    }

    while (j <= ei) {
        merged[k++] = arr[j++];
    }

    for (int i = si, j = 0; i <= ei; i++, j++) {
        arr[i] = merged[j];
    }

}
void merge(int arr[], int s, int e) {
    if (e >= s) {
        int mid = s + (e - s) / 2;
        merge(arr, s, mid);
        merge(arr, mid + 1, e);
        conquer(arr, s, mid, e);
    }
}

int main() {
    int arr[] = {7,3,2,16,24,4,11,9};
    merge(arr,0,7);
    for (int i = 0; i < 8; i++)
    {
        cout<<arr[i]<<' ';
    }
    

    return 0;
}

