#include <bits/stdc++.h>
using namespace std;




int main(){
    int n;
    int temp=0;
    int total=0;
    cin>>n;

    for(int i=1; i<=n; i++){
        temp+=i;
        total+=temp;
        if(total==n){
            cout<<i;
            break;
        }
        if(total>n){
            cout<<i-1;
            break;
        }
    }

    return 0;
}
