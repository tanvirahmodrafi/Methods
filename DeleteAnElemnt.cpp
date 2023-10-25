#include <iostream>
#include <cmath>

using namespace std;
//This code allows to delete an element from an array

int main()
{
    int n;
    cout<< "Length of the array"<<'\n';
    cin >> n;
    int arrr[n];
    cout<< "Enter the elements of the array"<<'\n';
    
    for (int i = 0; i < n; i++){
        cin >> arrr[i];
    }

    int sizeOfArray = sizeof(arrr)/sizeof(arrr[0]);

    for (int i = 0; i < n; i++)
    {
        cout<<"0"<<i<<": "<<arrr[i]<<endl;
    }

    int position = 0;
    cout<< "Enter the position of the element to be deleted"<<'\n';
    cin >> position;

    for(int i = position - 1; i < n; i++){
        arrr[i] = arrr[i+1];
    }
    n--;

    for (int i = 0; i < n; i++)
    {
        cout<<arrr[i]<<": 0"<<i<<endl;
    }

    return 0;
}