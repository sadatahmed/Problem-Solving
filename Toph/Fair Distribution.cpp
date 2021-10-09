#include <bits/stdc++.h>
using namespace std;


int main(){
    int child, chocolate, additionalChoco=0;
    cin>>child>>chocolate;

    while(chocolate%child!=0){
        additionalChoco++;
        chocolate++;
    }
    cout<<additionalChoco;

    return 0;
}
