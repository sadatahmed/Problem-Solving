#include <bits/stdc++.h>
using namespace std;
#define ll long long int

ll n, sum=0;

void minimumCoin_recuired(ll defence, ll attack, ll heros[]){
    ll ans1=0, ans2=0;
    ll low_bnd=lower_bound(heros, heros+n, defence)-heros;
    if(defence>heros[low_bnd-1]) ans2=defence-heros[low_bnd-1];
    if(defence>heros[low_bnd]) ans1=defence-heros[low_bnd];


    if(attack>(sum-heros[low_bnd])) ans1=ans1+attack-(sum-heros[low_bnd]);
    if(attack>(sum-heros[low_bnd-1])) ans2=ans2+attack-(sum-heros[low_bnd-1]);

    cout<<min(ans1, ans2)<<endl;
}


int main(){
    ll dragon;
    ll attack, defence;
    scanf("%lld", &n);
    ll heros[n];

    for(ll i=0; i<n; i++){
        scanf("%lld", &heros[i]);
        sum+=heros[i];
    }
    sort(heros, heros+n);

    scanf("%lld", &dragon);
    for(ll i=0; i<dragon; i++){
        scanf("%lld %lld", &defence, &attack);
        minimumCoin_recuired(defence, attack, heros);
    }


    return 0;
}

