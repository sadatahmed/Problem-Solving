#include <bits/stdc++.h>
using namespace std;


int main(){
    int n, t;
    cin>>n>>t;
    string s;
    cin>>s;

    for(int j=1; j<=t; j++){
        for(int i=0; i<s.length(); i++){
        if(s[i]=='B' && s[i+1]=='G'){
            swap(s[i], s[i+1]);
            i=i+1;
        }
    }
    }
    cout<<s;


    return 0;
}
