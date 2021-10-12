#include <bits/stdc++.h>
using namespace std;


int main(){
    int n, minutes, solving_time;
    cin>>n>>minutes;

    solving_time=240-minutes;

    int i=1;
    int temp=0;
    while(solving_time>=temp+(5*i) && n>=i){
        temp=temp+(5*i);
        i++;
    }
    cout<<i-1;

    return 0;
}
