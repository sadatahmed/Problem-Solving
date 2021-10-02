#include <bits/stdc++.h>
using namespace std;
set<int> maxx;

int main(){
    int minNumerb=999999999;
    int n, curr_pos, cnt, prev_pos, nothing;
    cin>>n;
    int ara[n+1];

    for(int i=1; i<=n; i++){
        cin>>ara[i];
        if(ara[i]<minNumerb){
            minNumerb=ara[i];
            curr_pos=i;
        }else if(ara[i]==minNumerb){
            prev_pos=curr_pos;
            curr_pos=i;
            maxx.insert(curr_pos-prev_pos-1);

        }
    }

    if((curr_pos-prev_pos-1)>=n/2){
        curr_pos=prev_pos+1;
    }else if((curr_pos-prev_pos-1)<n/2){
        curr_pos=curr_pos+1;
    }
    cnt=minNumerb*n;
    //int tot=(minNumerb*n)+*maxx.rbegin();
    //cout<<cnt;

    while(ara[curr_pos]>minNumerb && curr_pos<=n){
        cnt++;
        curr_pos++;
        if(curr_pos>n){
            curr_pos=1;
        }
    }
    if(!maxx.empty()){
        int tot=(minNumerb*n)+*maxx.rbegin();
        cout<<max(cnt, tot);
    }else{
        cout<<cnt;
    }
    //cout<<max(cnt, tot);
    //cout<<endl<<cnt;
    //cout<<endl<<tot;

    return 0;
}
