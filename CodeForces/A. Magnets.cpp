#include <bits/stdc++.h>
using namespace std;


int main(){
    int n, cnt=1;
    cin>>n;
    int magnet[n+1];
    for(int i=1; i<=n; i++){
        cin>>magnet[i];
    }
    for(int i=1; i<=n-1; i++){
        if(magnet[i]!=magnet[i+1]){
            cnt++;
        }
    }
    cout<<cnt;

    return 0;
}
