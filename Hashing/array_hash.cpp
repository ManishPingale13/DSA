#include<bits/stdc++.h>
using namespace std;


// int hashh[10000000]={0}; works here

int main(){
    int n;
    cout<<"Enter n\n";
    cin>>n;
    int arr[n];

    cout<<"Enter array\n";
    for (int i = 0; i < n; i++)
        cin>>arr[i];

// int hashh[10000000]={0}; does not work here
    int hashh[13]={0};
    //pre compute
    for (int i = 0; i < n; i++)
    {
        hashh[arr[i]]+=1;
    }
    
    cout<<"Enter query\n";
    int qur;
    cin>>qur;
    for (int i = 0; i < qur; i++)
    {
        int num;
        cin>>num;
        cout<<hashh[num]<<endl;
    }
    
    
    return 0;
}