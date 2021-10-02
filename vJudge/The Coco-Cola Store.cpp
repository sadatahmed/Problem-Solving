#include <bits/stdc++.h>
using namespace std;

int ara[10000];

void maxCoco(int bottle, int itarators){
    if(bottle<2) return;
    if(bottle==2){
        ara[itarators]+=1;
        return;
    }
    ara[itarators]+=(bottle/3);
    maxCoco((bottle/3)+(bottle%3), itarators);
}

int main(){
    int n[10000], ita;
    for(int i=0; i>-1; i++){
        ara[i]=0;
        cin>>n[i];
        ita=i-1;
        if(n[i]==0) break;
    }

    for(int i=0; i<=ita; i++){
        maxCoco(n[i], i);
    }

    for(int i=0; i<=ita; i++){
        cout<<ara[i]<<endl;
    }


    return 0;
}
