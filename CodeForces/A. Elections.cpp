#include <bits/stdc++.h>
using namespace std;

void election_result(int a, int b, int c){
    if(a==b && b==c){
        cout<<c-a+1<<" "<<c-b+1<<" "<<c-b+1<<endl;
        return;
    }
    if(a>b && a>c){
            cout<<0<<" "<<a-b+1<<" "<<a-c+1<<endl;
        }
        else if(b>a && b>c){
            cout<<b-a+1<<" "<<0<<" "<<b-c+1<<endl;
        }else if(c>a && c>b){
            cout<<c-a+1<<" "<<c-b+1<<" "<<0<<endl;
        }
    else{
        if(a==b){
            cout<<a-b+1<<" "<<b-a+1<<" "<<a-c+1<<endl;
        }
        else if(b==c){
            cout<<c-a+1<<" "<<b-b+1<<" "<<c-c+1<<endl;
        }else{
            cout<<c-a+1<<" "<<c-b+1<<" "<<c-a+1<<endl;
        }
    }
}

int main(){
    int n;
    cin>>n;
    int a, b, c;

    for(int i=0; i<n; i++){
        cin>>a>>b>>c;

        election_result(a, b, c);
    }

    return 0;
}
