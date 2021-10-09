#include <bits/stdc++.h>
using namespace std;


int main(){
    int N;
    cin>>N;
    string ara[N];
    for(int i=0; i<N; i++){
        cin>>ara[i];
    }

    int x=ara[0].length()-1;
    for(int i=0; i<N; i++){
        for(int j=0; j<x; j++){
            cout<<ara[i][j];
        }
    }

    return 0;
}
