#include <iostream>
#include <unordered_set>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of array" << '\n';
    cin >> n;
    int arr[n];

    cout << "Enter the elements" << '\n';
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 1; i < n; i++) // compareing the before and after elements so i = 1;
    {
        int current = arr[i]; // storing the value to compare;
        int j = i - 1;
        while (arr[j] > current && j >= 0)
        {
            arr[j + 1] = arr[j]; // moving the elements to put arr[j] in right plce;
            j--;                 // moves left side of the array;
        }
        arr[j + 1] = current; // putting the elements in right place;
    }
    cout << "Sorted array is: ";
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
