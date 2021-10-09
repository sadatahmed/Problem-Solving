#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    int b[n];
    for(int i=0; i<n; i++){
        cin>>a[i]>>b[i];
    }

    for(int i=0; i<b[i]; i++){
        for(int j=0; j<n; j++){
            int total=pow(a[i], j);
            cout<<total<<endl;
        }
    }


    return 0;
}
