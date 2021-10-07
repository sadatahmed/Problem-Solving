#include <bits/stdc++.h>
using namespace std;
int flag=0;

void distinct(int y){
    int temp=y;
    int w=y%10;
    y=y/10;
    int x=y%10;
    y=y/10;
    int z=y%10;
    y=y/10;
    int zz=y%10;
    flag=temp;

    if(w==x || w==z || w==zz || x==z || x==zz || z==zz){
        distinct(temp+1);
    }
    //cout<<temp<<endl;
}

int main(){
    int y;
    cin>>y;

    distinct(y+1);
    cout<<flag;

    return 0;
}
