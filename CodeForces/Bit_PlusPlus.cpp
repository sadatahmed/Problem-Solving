#include <bits/stdc++.h>
using namespace std;


int main(){
    int n;
    int output=0;
    string bit;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>bit;
        if(bit=="++X" || bit=="X++"){
            output++;
        }else{
            output--;
        }
    }
    cout<<output;

    return 0;
}
