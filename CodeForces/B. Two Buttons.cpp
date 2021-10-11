#include <bits/stdc++.h>
using namespace std;
int cont=0;

int main(){
    int n, m;
    cin>>n>>m;

    //backtracking
    while(n!=m){
        if(n>m || m%2!=0){
            m++;
        }
        else m=m/2;
        cont++;
    }
    cout<<cont;

    return 0;
}
