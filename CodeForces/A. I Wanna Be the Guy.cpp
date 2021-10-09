#include <bits/stdc++.h>
using namespace std;


int main(){
    int n, cnt=0;
    int p, q;
    cin>>n;
    int littleX[n+1], littleY[n+1];

    cin>>p;
    for(int i=1; i<=p; i++){
        cin>>littleX[i];
    }
    cin>>q;
    for(int i=1; i<=q; i++){
        cin>>littleY[i];
    }

    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if((i==littleX[j]) || (i==littleY[j])){
                cnt++;
                break;
            }
        }
    }

    if(cnt>=n) cout<< "I become the guy.";
    else cout<<"Oh, my keyboard!";

    return 0;
}
