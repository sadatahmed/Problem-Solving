#include <bits/stdc++.h>
using namespace std;


int main(){
    double n, p, total=0;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>p;
        total+=p;
    }
    cout<<(double)(total/n);


    return 0;
}
