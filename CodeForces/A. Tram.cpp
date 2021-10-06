#include <bits/stdc++.h>
using namespace std;


int main(){
    int n, passenger=0, capacity=0;
    cin>>n;
    int ara[n], arab[n];
    for(int i=1; i<=n; i++){
        cin>>ara[i];
        cin>>arab[i];

        passenger=arab[i]-ara[i]+passenger;
        if(passenger>capacity){
            capacity=passenger;
        }
    }
    cout<<capacity;

    return 0;
}
