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
    int arr[] = {7, 3, 2, 16, 24, 4, 11, 9};
    divide(arr, 0, 7);
    for (int i = 0; i < 8; i++)
    {
        cout << arr[i] << ' ';
    }

    return 0;
}
