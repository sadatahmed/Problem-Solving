#include <bits/stdc++.h>
using namespace std;


int main(){
    int n, cnt=0;
    cin>>n;
    char arra[n];
    for(int i=0; i<n; i++){
        cin>>arra[i];
    }
    for(int i=0; i<n; i++){
        if(arra[i]==arra[i+1]) cnt++;
    }
cout<<cnt;

    return 0;
}
