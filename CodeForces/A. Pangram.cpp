#include <bits/stdc++.h>
using namespace std;



int main(){
    int n, cnt=0;
    cin>>n;
    int temp=n;
    string letters;
    cin>>letters;

    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(tolower(letters[i])==tolower(letters[j])){
                letters[j]=-1;
            }
        }
    }

    for(int i=0; i<n; i++){
        if(letters[i]!=-1) cnt++;
    }

    if(cnt==26) cout<<"YES";
    else cout<<"NO";

    return 0;
}
