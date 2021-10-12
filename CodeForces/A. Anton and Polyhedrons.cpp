#include <bits/stdc++.h>
using namespace std;


int main(){
    int n, result=0;
    cin>>n;
    string polygone[n];

    for(int i=0; i<n; i++){
        cin>>polygone[i];
    }
    for(int i=0; i<n; i++){
        if(polygone[i][0]=='T'){
            result+=4;
        }
        else if(polygone[i][0]=='C'){
            result+=6;
        }
        else if(polygone[i][0]=='O'){
            result+=8;
        }
        else if(polygone[i][0]=='D'){
            result+=12;
        }
        else if(polygone[i][0]=='I'){
            result+=20;
        }
    }

    cout<<result;


    return 0;
}
