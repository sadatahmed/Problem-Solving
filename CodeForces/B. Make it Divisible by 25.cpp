#include <bits/stdc++.h>
using namespace std;

int cont=0;

void dividesBy(string num){
    int result=0;
    for(int i=0; i<num.size(); i++){
        for(int j=i+1; j<num.size(); j++){
            if(((num[i]-'0')*10+(num[j]-'0'))%25==0){
                result=num.size()-i-2;
            }
        }
    }
    cout<<result<<endl;
}

int main(){
    int n;
    string number;
    cin>>n;

    for(int i=0; i<n; i++){
        cin>>number;

        dividesBy(number);
    }

    return 0;
}
