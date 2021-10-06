#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b;
    int cnt=0;
    cin>>a>>b;


    while(a*3<=b*2){
        a=a*3;
        b=b*2;
        cnt++;
    }
    cout<<cnt+1;

    return 0;
}
