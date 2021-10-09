#include <bits/stdc++.h>
using namespace std;


int main(){
    int flag=1;
    string s;
    cin>>s;
    int len=s.length()-1;
    for(int i=0; i<s.length(); i++){
        if(i==len) break;
        if(s[i]!=s[len]){
            flag=0;
            break;
        }
        len--;
    }
    if(flag) cout<<"Yes";
    else cout<<"No";

    return 0;
}
