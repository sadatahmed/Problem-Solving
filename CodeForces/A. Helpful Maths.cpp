#include <bits/stdc++.h>
using namespace std;


int main(){
    string str;
    cin>>str;
    for(int i=0; i<str.length(); i++){
        for(int j=0; j<str.length()-1; j++){
            if(j%2==0){
                if(str[j]>str[j+2]) swap(str[j], str[j+2]);
            }
        }
    }
    cout<<str;

    return 0;
}
