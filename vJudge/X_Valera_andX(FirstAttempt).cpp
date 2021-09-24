#include <bits/stdc++.h>
using namespace std;
#define SIZE 100

char ara[SIZE][SIZE];
int n;
bool isRight=true;
bool isTrue=true;

void homeWork(int i, int dec){
    //base case
    if(i>=n) return;
    if(dec<0) return;
    //cout<<ara[i][i]<<" "<<ara[i][dec]<<" ";
    if(ara[i][i]!=ara[i][dec]){
        isRight=false;
    }
    homeWork(i+1, dec-1);
}


int main(){

    cin>>n;

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>ara[i][j];
        }
    }
    if(n<2) cout<<"NO";
    else if(n%2==0) cout<<"NO";
    else{
        homeWork(0, n-1);

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(int(ara[i][j])>96 && ara[i][j]<123){
                if(i!=j && j!=n-i-1){
                    if((ara[i][j]!=ara[0][1] && ara[i][j]!=ara[j][i+1]) || (ara[i][j]==ara[i][i])){
                        isTrue=false;
                    }
                }
            }
            else{
                isTrue=false;
            }
        }
    }
    if(isRight&&isTrue){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    }

    return 0;
}
