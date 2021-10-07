#include <bits/stdc++.h>
using namespace std;


int main(){
    string s, t;
    int flag=1;
    cin>>s>>t;

    int siz=t.length()-1;
    for(int i=0; i<s.length(); i++){
        if(s[i]!=t[siz]){
            flag=0;
            break;
        }
        siz--;
    }
    if(flag) cout<<"YES";
    else cout<<"NO";

    return 0;
}
