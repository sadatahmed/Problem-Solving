#include <bits/stdc++.h>
using namespace std;



int main(){
    int t, chocolate;
    cin>>t;

    for(int i=0; i<t; i++){
        cin>>chocolate;
        if(chocolate%2==0){
            cout<<(chocolate/2)-1<<endl;
        }
        else{
            cout<<chocolate/2<<endl;
        }
    }

    return 0;
}
