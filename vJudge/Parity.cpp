#include <bits/stdc++.h>
using namespace std;

int main(){
    int n[10000], ara[100], i;
    int ita;
    for(int i=0; i>-1; i++){
        cin>>n[i];
        ita=i-1;
        if(n[i]==0) break;
    }
    for(int x=0; x<=ita; x++){
        for(i=0; n[x]>0; i++){
            ara[i]=n[x]%2;
            n[x]=n[x]/2;
        }

        int cont=0;
        cout<<"The parity of ";
        for(i=i-1; i>=0; i--){
            if(ara[i]==1){
                cont++;
            }
            cout<<ara[i];
        }
        cout<<" is "<<cont<<" (mod 2)."<<endl;
    }

    return 0;
}
