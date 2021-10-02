#include <bits/stdc++.h>
using namespace std;
#define SIZ 1000000

int ara[SIZ];
vector<int> vec[SIZ];


void dfs(int src){
    ara[src]=1;
    int u;
    for(int i=0; i<vec[src].size(); i++){
        u=vec[src][i];
        if(ara[u]==0){
            dfs(u);
        }
    }
}

int main(){
    int n, destination, a;
    cin>>n>>destination;

    for(int i=1; i<n; i++){
        cin>>a;
        vec[i].push_back(i+a);
    }
    dfs(1);
    if(ara[destination]==1){
        cout<<"YES";
    }else{
        cout<<"NO";
    }

    return 0;
}
