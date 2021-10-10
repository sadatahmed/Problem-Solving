#include <bits/stdc++.h>
using namespace std;


int main(){
    int n, cont=0;
    cin>>n;
    int home[n], away[n];

    for(int i=0; i<n; i++){
        cin>>home[i]>>away[i];
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(home[i]==away[j]){
                cont++;
            }
        }
    }

    cout<<cont;


    return 0;
}
