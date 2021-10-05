#include <bits/stdc++.h>
using namespace std;


int main(){
    char temp;
    string name;
    cin>>name;
    int length=name.length();
    for(int i=0; i<name.length(); i++){
        if(name[i]=='$') continue;
        for(int j=i+1; j<name.length(); j++){
            if(name[i]==name[j]){
                length--;
                name[j]='$';
            }
        }
    }

    if(length%2==0){
        cout<< "CHAT WITH HER!";
    }else{
        cout<< "IGNORE HIM!";
    }
    return 0;
}
