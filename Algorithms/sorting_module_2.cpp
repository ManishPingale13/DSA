#include<bits/stdc++.h>
using namespace std;

void mergeVector(vector<int> &arr,int low,int mid,int high){
    vector<int> temp;
    int left=low;
    int right=mid+1;

    while(left<=mid&&right<=high){
        if(arr[left]<=arr[right]){
            temp.push_back(arr[left]);
            left++;
        }else{
            temp.push_back(arr[right]);
            right++;
        }
    }

    //Right array exhausted
    while(left<=mid){
        temp.push_back(arr[left]);
        left++;
    }

    //Left array exhausted
    while(right<=high){
        temp.push_back(arr[right]);
        right++;
    }

    //pasting into arr from temp
    for(int i=low;i<=high;i++)
        arr[i]=temp[i-low];     //i-low bcz low is not 0 everytime
    
}

//Time complexity for divide - log(N)
//Time complexity for merge - (N)
//MERGE SORT - O(N log N)
void mergeSortVector(vector<int> &arr,int low,int high){
    if(low==high) return;

    int mid=(low+high)/2;
    mergeSortVector(arr,low,mid);
    mergeSortVector(arr,mid+1,high);
 
    mergeVector(arr,low,mid,high);

}

int main(){
    vector<int> vectorArr={12,-41,10,40,0,140,1};

    cout<<"Before sorting:\n";
    for(auto i:vectorArr)
        cout<<i<<"\t";
    cout<<endl;

    mergeSortVector(vectorArr,0,6);
    
    cout<<"\nAfter sorting:\n";
    for(auto i:vectorArr)
        cout<<i<<"\t";
    cout<<endl;
    return 0;
}