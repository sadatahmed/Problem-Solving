#include <bits/stdc++.h>
using namespace std;


int main(){
    int M, N;
    int cnt=0;
    cin>>M>>N;
    int rectangularArea=M*N;

    while(rectangularArea>=2){
        rectangularArea-=2;
        cnt++;
    }
    cout<<cnt;

    return 0;
}
