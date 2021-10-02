#include <bits/stdc++.h>
using namespace std;


int main(){
    int n, one=0, zero=0;
    cin>>n;
    string binaryHold;
    cin>>binaryHold;

    for(int i=0; i<n; i++){
        if(binaryHold[i]=='0'){
            zero++;
        }else{
            one++;
        }
    }
    cout<<abs(one-zero);

    return 0;
}
