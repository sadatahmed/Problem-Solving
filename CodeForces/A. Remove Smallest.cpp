#include <bits/stdc++.h>
using namespace std;


void remove_smallest(int ara[], int n){
    if(n==1) cout<<"YES"<<endl;
    else{
        sort(ara, ara+n);
        for(int i=0; i<n-1; i++){
            if(abs(ara[i]-ara[i+1])<=1){
                continue;
            }else{
                cout<<"NO"<<endl;
                return;
            }
        }
        cout<<"YES"<<endl;
    }
}


int main(){
    int n, array_size, temp;
    cin>>n;

    for(int i=0; i<n; i++){
        cin>>array_size;
        int ara[array_size];

        for(int j=0; j<array_size; j++){
            cin>>ara[j];
        }
        remove_smallest(ara, array_size);
    }


    return 0;
}
