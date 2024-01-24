#include <iostream>
using namespace std;
int n;
int main()
{   
    cout<<"Enter the size of array"<<'\n';
    cin >> n;
    int arr[n];

    cout<<"Enter the elements"<<'\n';
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int temp = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-(i+1); j++)//n-(i+1): because in each loop the last element is sorted.
        {
            if (arr[j]>arr[j+1])
            {
                temp = arr[j];//saving the value.
                arr[j] = arr[j+1];//swaping the value with bigger elements.
                arr[j+1] = temp;
            }
        }
    }
    cout<<"Sorted array is: ";
    for (int i = 0; i < 5; i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}
