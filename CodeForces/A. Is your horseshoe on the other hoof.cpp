#include <bits/stdc++.h>
using namespace std;

int main(){
    int cnt=0;
    int color[5];
    for(int i=0; i<4; i++){
        cin>>color[i];
    }

    for(int i=0; i<3; i++){
        for(int j=i+1; j<4; j++){
            if(color[i]==color[j]){
                cnt++;
                color[j]=(-1)*j;
            }
        }
    }
    cout<<cnt;

    return 0;
}
