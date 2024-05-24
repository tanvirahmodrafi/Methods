#include <bits/stdc++.h>
using namespace std;
int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = low - 1;
    for (int j = low; j < high; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(arr[j], arr[i]);
        }
    }
    i++;
    swap(arr[i], arr[high]);
    return i;
}
void quicksort(int arr[],int low,int high){
    if(low<high){
        int pivot = partition(arr,low,high);
        quicksort(arr,low,pivot-1);
        quicksort(arr,pivot+1,high);
    }
}
int main(){
    int n;
    cout<<"Enter the number of array"<<endl;
    cin >> n;
    int arr[n];
    cout<<"Enter elements for the array"<<'\n';
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
    quicksort(arr,0,n-1);
    cout<<"Your sorted arrat is "<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<' ';
    }
    return 0;
}