#include <bits/stdc++.h>
using namespace std;

int main(){
    int k_price, n_takaHas, w_wants;
    int total=0;
    cin>>k_price>>n_takaHas>>w_wants;

    for(int i=1; i<=w_wants; i++){
        total+=i*k_price;
    }
    total=total-n_takaHas;
    if(total<=0) cout<<0;
    else cout<<total;


    return 0;
}
