#include <bits/stdc++.h>
using namespace std;


int main(){
    string s;
    int cnt=0;
    cin>>s;

    for(int i=0; i<s.length(); i++){
        if(s[i]==toupper(s[i])){
            cnt++;
        }
    }
    if(cnt>s.length()-cnt){
        for(int i=0; i<s.length(); i++){
            s[i]=toupper(s[i]);
        }
    }else{
        for(int i=0; i<s.length(); i++){
            s[i]=tolower(s[i]);
        }
    }
    cout<<s;

    return 0;
}
