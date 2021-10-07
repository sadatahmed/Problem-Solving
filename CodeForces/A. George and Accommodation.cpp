#include <bits/stdc++.h>
using namespace std;


int main(){
    int n, cnt=0;
    cin>>n;
    int p[n+1], q[n+1];

    for(int i=1; i<=n; i++){
        cin>>p[i]>>q[i];

        if(q[i]-p[i]>=2){
            cnt++;
        }
    }
    cout<<cnt<<endl;

    return 0;
}
