#include <bits/stdc++.h>
using namespace std;
//int merged[] = new int[45];

void conqure(int arr[],int si,int mid,int ei){
    int *merged = new int[ei-si+1];
    int i = si,j = mid+1,k = 0;
    while(i<=mid && j<=ei){
        if(arr[i] <= arr[j]){
            merged[k++] = arr[i++];
        }else{
            merged[k++] = arr[j++];
        }
    }
    while (i<=mid)
    {
        merged[k++] = arr[i++];
    }
    while (j<=ei)
    {
        merged[k++] = arr[j++];
    }

    for (int i = si,j = 0; i <= ei; i++,j++)
    {
        arr[i] = merged[j];
    }  
}

void concure(int arr[], int s, int mid, int e) {
    int *merges = new int[e-s+1];
    int i = s, j = mid+1, k=0;
    while(i <=mid && j <=e){
        if(arr[i] <= arr[j]){
            merges[k++] = arr[i++];
        }else{
            merges[k++] = arr[j++];
        }
    }

    while(i <=mid){
        merges[k++] = arr[i++];
    }

    while (j <=e)
    {
        merges[k++] = arr[j++];
    }
    for (int i = s,j = 0; i <= e; i++,j++)
    {
        arr[i] = merges[j];
    }
    delete[] merges;    
}



void devide(int arr[],int s,int e){
    if(e>s){
    int mid = s+(e-s)/2;
    devide(arr,s,mid);
    devide(arr,mid+1,e);

    concure(arr,s,mid,e);
    }
}
int main(){
    int arr[] = {5, 4, 3, 2, 1};
    devide(arr,0,4);
    for (int i = 0; i < 5; i++)
    {
        cout<<arr[i]<<' ';
    }
    
}