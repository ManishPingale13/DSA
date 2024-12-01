#include<bits/stdc++.h>
using namespace std;

void print_name(int i,int n){
    if(i>n) return;
    cout<<"Maverick\n";
    print_name(i+1,n);
}

void print_1toN(int i , int n){
    if(i>n) return;
    cout<<i<<endl;
    print_1toN(i+1,n);
}

void print_Nto1(int i,int n){
    if(n<i) return;
    cout<<n<<endl;
    print_Nto1(i,n-1);
}

void backtrack_1toN(int i,int n){
    if(n<i) return;
    backtrack_1toN(i,n-1);
    cout<<n<<endl;
}

void backtrack_Nto1(int i,int n){
    if(i>n) return;
    backtrack_Nto1(i+1,n);
    cout<<i<<endl;
}

int main(){
    // print name 5 times
    // print_name(1,5);
    // print_1toN(1,5);
    // print_Nto1(1,5);
    // backtrack_1toN(1,10);
    backtrack_Nto1(10,20);
}