#include <bits/stdc++.h>
using namespace std;
#define INF 99999999


int main(){
    int n, maximum=0, minimum=INF;
    int mx, mn;
    cin>>n;
    int ara[n];

    for(int i=1; i<=n; i++){
        cin>>ara[i];
    }

    for(int i=1; i<=n; i++){
        if(maximum<ara[i]){
            maximum=ara[i];
            mx=i;
        }
        if(minimum>=ara[i]){
            minimum=ara[i];
            mn=i;
        }
    }
    maximum=mx-1;
    minimum=n-mn;

    if(mx>mn) cout<<maximum+minimum-1;
    else cout<<maximum+minimum;


    return 0;
}
