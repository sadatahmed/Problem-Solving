#include <bits/stdc++.h>
using namespace std;

void minimumMoves(int distance){
    int cont=0;
    if(distance<=10) cout<<1<<endl;
    else{
        if(distance%10==0) cout<<distance/10<<endl;
        else{
            cont=distance/10;
            cout<<cont+1<<endl;
        }
    }
}

int main(){
    int n, a, b, distance;
    cin>>n;

    for(int i=0; i<n; i++){
        cin>>a>>b;

        if(a==b) cout<<0<<endl;
        else if(a<b){
            distance=b-a;
            minimumMoves(distance);
        }else{
            distance=a-b;
            minimumMoves(distance);
        }
    }


    return 0;
}
