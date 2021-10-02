#include <bits/stdc++.h>
using namespace std;

int main(){
    int total=0, prev=0, n;
    cin>>n;
    int weight[n+1], price[n+1];

    for(int i=0; i<n; i++){
        cin>>weight[i];
        cin>>price[i];
    }

    for(int i=0; i<n; i++){
        int curr=i;
        if(price[curr]<=price[prev]){
            total+=price[curr]*weight[i];
            prev=curr;
        }else if(price[curr]>price[prev]){
            total+=price[prev]*weight[i];
        }
    }
    cout<<total;

    return 0;
}
