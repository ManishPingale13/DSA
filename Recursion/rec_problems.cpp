#include<bits/stdc++.h>
using namespace std;

int sumOfN(int n){
   if(n<0) return 0;
   return n+sumOfN(n-1);
}

int factOfN(int n){
   if(n<=0) return 1;
   return n*factOfN(n-1);
}

void sumtn(int n,int sum){
    if(n==0){
        cout<<sum<<endl;
        return;
    }
    sumtn(n-1,sum+n);
}

void fact(int n , int ans){
    if(n==1){
        cout<<ans<<endl;
        return;
    }
    fact(n-1,ans*n);
}

int main(){
    // cout<<sumOfN(3)<<endl;
    // cout<<factOfN(5)<<endl;

    sumtn(5,0);
    fact(5,1);

    return 0;
}