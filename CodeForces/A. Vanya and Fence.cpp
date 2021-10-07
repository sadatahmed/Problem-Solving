#include <bits/stdc++.h>
using namespace std;


int main(){
    int n, h;
    cin>>n>>h;
    int a[n+1];
    int roadWide=n;

    for(int i=1; i<=n; i++){
        cin>>a[i];

        if(a[i]>h){
            roadWide++;
        }
    }
    cout<<roadWide<<endl;

    return 0;
}
