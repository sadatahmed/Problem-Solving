#include <bits/stdc++.h>
using namespace std;

void divisibility(int a, int b){
    if(a%b==0){
        cout<<0<<endl;
        return;
    }

    int div=a/b;
    div=(div+1)*b;
    int result=a-div;
    cout<<abs(result)<<endl;
}


int main(){
    int n, a, b;
    cin>>n;

    for(int i=0; i<n; i++){
        cin>>a>>b;
        divisibility(a, b);
    }


    return 0;
}
