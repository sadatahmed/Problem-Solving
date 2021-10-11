#include <bits/stdc++.h>
using namespace std;



int main(){
    int n;
    int last=0, first=0, secondLast=0, third=0, second=0;
    cin>>n;

    if(n>=100){
        last=n/100;
        n=n-last*100;
    }

    if(n>=20){
        secondLast=n/20;
        n=n-secondLast*20;
    }

    if(n>=10){
        third=n/10;
        n=n-third*10;
    }

    if(n>=5){
        second=n/5;
        n=n-second*5;
    }

    if(n>=1 && n<5){
        first=n;
    }

    cout<<first+second+third+secondLast+last;

    return 0;
}
