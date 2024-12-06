#include<bits/stdc++.h>
using namespace std;

void recursiveBubbleSort(int arr[],int n){

    if(n==1) return;
    bool swap=false;
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            swap=true;
            int temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
        }
    }
    if(!swap) return;
    recursiveBubbleSort(arr,n-1);
}

int main(){
    int arr[]={1,2,4,6,8,31};
    recursiveBubbleSort(arr,6);
    for(auto i:arr)
        cout<<i<<"\n";
    return 0;
}