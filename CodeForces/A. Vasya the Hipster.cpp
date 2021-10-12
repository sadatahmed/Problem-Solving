#include <bits/stdc++.h>
using namespace std;



int main(){
    int red_socks, blue_socks;
    cin>>red_socks>>blue_socks;

    int diff_color=min(red_socks, blue_socks);
    int same_color=max(red_socks, blue_socks);

    cout<<diff_color<<" ";
    cout<<(same_color-diff_color)/2;



    return 0;
}
