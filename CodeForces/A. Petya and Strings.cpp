#include <bits/stdc++.h>
using namespace std;


int main(){
    string str1, str2;
    int cnt=0;
    cin>>str1;
    cin>>str2;
    for(int i=0; i<str1.length(); i++){
        if(tolower(str1[i])>tolower(str2[i])){
            cout<<"1";
            break;
        }
        else if(tolower(str1[i])==tolower(str2[i])){
            if(str1.length()-1==i){
                cout<<cnt;
                break;
            }
            cnt+=0;
            continue;
        }else{
            cout<<"-1";
            break;
        }
    }

    return 0;
}
