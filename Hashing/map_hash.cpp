#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    //pre compute and take input at once
    unordered_map<int,int> mpp;     //unordered map has best & avg time complexity of O(1) and worst O(n)
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
        mpp[arr[i]]++;
    }

    int q;
    cin>>q;
    while(q--){
        int n;
        cin>>q;
        cout<<mpp[q]<<endl; //fetching
    }
    
    return 0;
}