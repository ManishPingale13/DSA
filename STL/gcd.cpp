#include<bits/stdc++.h>
using namespace std;

void gcd(){
    int a=52,b=130;
    int hcf;
    for(int i=min(a,b);i>1;i--){
        if((a%i==0)&&(b%i==0)){
            cout<<"HCF: "<<i<<endl;
            break;
        }
    }
}

int main(){
    int a=54,b=10;

    gcd();

    /*
        By eucladian formula
        gcd(a,b) = gcd(a-b,b)   where a>b
        thats equivalant to 
        gcd(a,b) = gcd(a%b,b)   where a>b
    */
    while((a>0)&&(b>0)){
        if(a>b) a=a%b;
        else b=b%a;
    }
    //54%10= 4 
    //10%4=2
    //4%2=0
    //2 remained
    if(a==0) cout<<"GCD: "<<b<<endl;
    else  cout<<"GCD: "<<a<<endl;
    return 0;
}