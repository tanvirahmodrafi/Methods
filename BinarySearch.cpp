#include <iostream>
#include <vector>
using namespace std;

int binarySearch(int arr[], int arraySize, int key)
{
    int start = 0;
    int end = arraySize - 1;

    while (start <= end)
    {
        int mid = (start + end) / 2;

        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] > key)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return -1;
}

int main(void)
{
    cout << "Enter the size of the array" << '\n';
    int n;
    int key;
    cin >> n;
    int array[n];

    cout << "Enter the elements of the array" << '\n';

    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    int arraySize = (sizeof(array) / sizeof(array[0]));

    sort(array, arraySize + array);

    cout << "Enter the keys to be searched array" << '\n';
    cin >> key;

    int indexOfTheArray = binarySearch(array, n, key);
    if (indexOfTheArray == -1)
    {
        cout << "The element you want to search is not found" << '\n';
    }
    else
    {
        cout << "The element is in the sorted array at index :" << indexOfTheArray;
    }
}