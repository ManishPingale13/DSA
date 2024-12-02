#include<bits/stdc++.h>
using namespace std;

 
int main(){
    int arr[]={10,2,2,3,10,10};
    map<int,int> sorted;
    for (int i = 0; i < 6; i++)
    {
        sorted[arr[i]]++;
    }

    int minEle,minFrq=sorted.begin()->second;
    int maxEle,maxFre=0;

    for (auto ele:sorted)
    {
        if(ele.second>maxFre){
            maxEle=ele.first;
            maxFre=ele.second;
        }
        if(ele.second<minFrq){
            minEle=ele.first;
            minFrq=ele.second;
        }
    }
    cout<<"Min "<<minEle<<" Fre: "<<minFrq<<endl;
    cout<<"Max "<<maxEle<<" Fre: "<<maxFre<<endl;

    
    
    return 0;
}