#include<bits/stdc++.h>
using namespace std;

void reverse(int arr[],int front,int rear){
    if(front==rear) return;
    int temp=arr[front];
    arr[front]=arr[rear];
    arr[rear]=temp;
    reverse(arr,front+1,rear-1);

}

bool str_pal(string &str,int front,int size){
    if(front>=size/2) return true;
    if(str[front]!=str[size-front-1])
        return false; 
    return str_pal(str,front+1,size);
}

void rev_str(string &str,int front,int size){
    if(front>=size/2)return;
    char ch=str[front];
    str[front]=str[size-1-front];
    str[size-1-front]=ch;
    rev_str(str,front+1,size);
}

int fibo(int n)
{
    if(n<=1) return n;
    return fibo(n-1)+fibo(n-2);
}
int main(){
    // int arr[]={10,20,30,40,50};
    // reverse(arr,0,4);
    // for(auto i:arr)
    //     cout<<i<<endl;

    // string name="hsinaM";
    // cout<<str_pal(name,0,5)<<endl;
    // rev_str(name,0,6);
    // cout<<name<<endl;

    cout<<fibo(4)<<endl;
    return 0;
}