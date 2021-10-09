#include <bits/stdc++.h>
using namespace std;

int main(){
    long long int n, i=0, cnt=1, temp=0, result;
    cin>>n;
    long long int arra[100];

    while(n>=1){
        arra[i]=n%10;
        n=n/10;
        i++;
    }
    sort(arra, arra+i);
    for(int j=0; j<i; j++){
        for(int k=j; k<i; k++){
            if(arra[j]==arra[k]){
                cnt++;
            }
            else break;
        }
        if(temp<cnt){
            temp=cnt;
            result=arra[j];
        }
        cnt=1;
    }
    cout<<result;

    return 0;
}
