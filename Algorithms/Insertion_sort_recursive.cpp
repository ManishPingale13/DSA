#include<bits/stdc++.h>
using namespace std;

void insertionSort(int arr[],int n,int max){
    int j=max-n;
    if(n==0) return;
    while(j>0&&arr[j-1]>arr[j]){
        int temp=arr[j-1];
        arr[j-1]=arr[j];
        arr[j]=temp;
        j--;
    }
    insertionSort(arr,n-1,max);
}

int main(){
    int arr[]={-14,43,51,5,2,-5,15,-21};
    insertionSort(arr,8,8);
    for(auto i:arr)
        cout<<i<<endl;
    return 0;
}