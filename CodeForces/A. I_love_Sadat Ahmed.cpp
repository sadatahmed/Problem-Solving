#include <bits/stdc++.h>
using namespace std;



int main(){
    int n;
    int mini=99999990, maxi=0, cont=0;
    cin>>n;
    int ara[n];

    for(int i=0; i<n; i++){
        cin>>ara[i];
    }

    for(int i=0; i<n; i++){
        if(ara[i]>maxi){
            if(i==0){
                maxi=ara[i];
            }else{
                maxi=ara[i];
                cont++;
            }
        }
        if(ara[i]<mini){
            if(i==0) mini=ara[i];
            else{
                mini=ara[i];
                cont++;
            }
        }
    }
    cout<<cont;


    return 0;
}
