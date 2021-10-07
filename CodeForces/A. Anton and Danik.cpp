#include <bits/stdc++.h>
using namespace std;


int main(){
    int n, anton=0, danik;
    string s;
    cin>>n;
    cin>>s;

    for(int i=0; i<n; i++){
        if(s[i]=='A') anton++;
    }
    danik=n-anton;
    if(anton>danik){
        cout<<"Anton";
    }else if(danik>anton){
        cout<<"Danik";
    }else{
        cout<<"Friendship";
    }

    return 0;
}
