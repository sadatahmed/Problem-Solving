#include <bits/stdc++.h>
using namespace std;

int main(){
    int k, l, m, n, d, cnt=0;
    cin>>k>>l>>m>>n>>d;

    for(int i=1; i<=d; i++){
        if(i%k==0) continue;
        else if(i%l==0) continue;
        else if(i%m==0) continue;
        else if(i%n==0) continue;
        else cnt++;
    }
    cout<<d-cnt;


    return 0;
}
