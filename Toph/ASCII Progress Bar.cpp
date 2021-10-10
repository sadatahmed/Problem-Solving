#include <bits/stdc++.h>
using namespace std;


int main(){
    int n, graph;
    cin>>n;

    graph=n/10;

    cout<<"[";
    for(int i=0; i<10; i++){
        if(i<graph){
            cout<<"+";
        }
        else{
            cout<<".";
        }
    }
    cout<<"] "<<n<<"%"<<endl;


    return 0;
}
