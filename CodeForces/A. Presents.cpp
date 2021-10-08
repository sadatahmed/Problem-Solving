/*
#include <bits/stdc++.h>
using namespace std;
#define INF 10000000
int n, flag=0, temp;
int result[INF];
int ara[INF];

void position(){
    for(int j=0; j<n; j++){
        if(temp>ara[j]){
            temp=ara[j];
            flag=j;
        }
    }
}

void present(){
    for(int i=0; i<n; i++){
        position();
        result[i]=flag+1;
        ara[flag]=INF;
        temp=INF;
    }
}


int main(){
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>ara[i];
    }
    temp=ara[0];

    present();

    for(int i=0; i<n; i++){
        cout<<result[i]<<" ";
    }

    return 0;
}

2 3 4 1
4 1 2 3

*/


#include <bits/stdc++.h>
using namespace std;


int main(){
    int n;
    cin>>n;
    int friends[n], to_gift[n];
    for(int i=1; i<=n; i++){
        cin>>friends[i];
        to_gift[friends[i]]=i;
    }
    for(int i=1; i<=n; i++){
        cout<<to_gift[i]<<" ";
    }

    return 0;
}
