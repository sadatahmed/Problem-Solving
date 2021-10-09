#include <bits/stdc++.h>
using namespace std;


int main(){
    int n, maxLen=0;
    cin>>n;
    string ara[n];

    for(int i=0; i<n; i++){
        cin>>ara[i];
        int lent=ara[i].length();
        if(lent%2==0){
            maxLen=max(maxLen, lent-1);
        }else maxLen=max(maxLen, lent);
    }
    maxLen=maxLen/2+1;

    for(int i=0; i<n; i++){
        int len=ara[i].length();
        if(len%2==0 && len>2){
            for(int k=0; k<(maxLen-((len-1)/2+1)); k++){
                cout<<" ";
            }
            for(int j=0; j<len-1; j++){
                cout<<ara[i][j];
            }
        }
        else if(len%2==0 && len==2){
            for(int k=0; k<(maxLen-((len-1)/2+1))-1; k++){
                cout<<" ";
            }
            for(int j=0; j<len; j++){
                cout<<ara[i][j];
            }cout<<"a";
        }else{
            for(int k=0; k<(maxLen-((len-1)/2+1)); k++){
                cout<<" ";
            }
            for(int j=0; j<len; j++){
                cout<<ara[i][j];
            }
        }cout<<endl;
    }

    return 0;
}

