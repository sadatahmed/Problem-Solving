#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, flag=1;
    cin>>n;

    while(n!=0){
        if(flag){
            cout<<"I hate";
            flag=0;
        }else{
            cout<<"I love";
            flag=1;
        }
        if(n>1){
            cout<<" that ";
        }else cout<<" it";
        n--;
    }

    return 0;
}
