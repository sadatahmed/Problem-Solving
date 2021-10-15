#include <bits/stdc++.h>
using namespace std;

void bearElection(int ara[], int temp, int n){
    int flag=1;
    while(flag){
        flag=0;
        int mx=distance(ara, max_element(ara+1, ara+n));
        if(ara[mx]>=ara[0]){
            flag=1;
            ara[0]=ara[0]+1;
            ara[mx]=ara[mx]-1;
        }
    }
    cout<<abs(ara[0]-temp);
}


int main(){
    int n, cnt=0, index=0;
    cin>>n;
    int ara[n];

    for(int i=0; i<n; i++) cin>>ara[i];

    int temp=ara[0];
    bearElection(ara, temp, n);


    return 0;
}
