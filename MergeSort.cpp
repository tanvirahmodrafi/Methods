#include <iostream>
using namespace std;

void concuer(int arr[],int s,int mid,int e){
    int *merg = new int[e-s+1];
    int i = s, j= mid+1, k = 0;
    while(i<=mid && j<= e){
        if(arr[i] >= arr[j] ){
            merg[k] = arr[j];
            k++,j++;
        }else{
            merg[k] = arr[i];
            k++,i++;
        }
    }
    while(i <= mid){
        merg[k] = arr[i];
        k++,i++;
    }
    while(j<= e){
        merg[k] = arr[j];
        k++,j++;
    }
    for (int i = s,j = 0; i <= e; i++,j++){
        arr[i] = merg[j];}
}
void divide(int arr[], int s, int e)
{
    if (e > s){
        int mid = s + (e - s) / 2;
        divide(arr, s, mid);
        divide(arr, mid + 1, e);
        concuer(arr,s,mid,e);
    }
}

int main()
{
    int n;
    cout<<"Enter the number of array"<<endl;
    cin >> n;
    int arr[n];
    cout<<"Enter elements for the array"<<'\n';
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    divide(arr, 0, n-1);
    cout<<"Your sorted array, using merge sort is "<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<' ';
    }
    return 0;
}
