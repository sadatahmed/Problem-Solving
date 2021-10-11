#include <bits/stdc++.h>
using namespace std;



int main(){
    int flag=1;
    string guestName, residenceName, mixup_letter, message;
    cin>>guestName>>residenceName>>mixup_letter;

    message=guestName+residenceName;

    sort(message.begin(), message.end());
    sort(mixup_letter.begin(), mixup_letter.end());

    if(message.length()!=mixup_letter.length()){
        flag=0;
    }
    else{
        for(int i=0; i<message.length(); i++){
            if(mixup_letter[i]!=message[i]){
                flag=0;
                break;
            }
        }
    }

    if(flag){
        cout<<"YES";
    }else{
        cout<<"NO";
    }

    return 0;
}
