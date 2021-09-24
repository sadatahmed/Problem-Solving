#include <bits/stdc++.h>
using namespace std;


int main(){
    int flag=0;
    int n;
    char diagonal, other;
    cin>>n;
    char ara[n+1][n+1];


    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>ara[i][j];
        }
    }

    diagonal=ara[0][0];
    other=ara[0][1];

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i==j || i+j==n-1){
                if(ara[i][j]!=diagonal){
                    flag=1;
                    break;
                }
            }else{
                if(ara[i][j]!=other){
                    flag=1;
                    break;
                }
            }
        }
        if(flag) break;
    }

    if(flag) cout<<"NO";
    else cout<<"YES";


    return 0;
}
