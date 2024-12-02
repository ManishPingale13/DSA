#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    
    //pre compute for small cased only 
    // int hash[26]={0};
    // for(int i=0;i<s.size();i++)
    //     hash[s[i]-'a']++;

    //For all chars
    int hash[256]={0};
    for(int i=0;i<s.size();i++)
        hash[s[i]]++;

    int q;
    cin>>q;
    while(q--){
        char ch;
        cin>>ch;
        // cout<<hash[ch-'a']<<endl;
        cout<<hash[ch]<<endl;
    }
    
    return 0;
}