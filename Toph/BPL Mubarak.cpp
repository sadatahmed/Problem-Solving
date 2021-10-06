#include <bits/stdc++.h>
using namespace std;


int main(){
    int t;
    int cont=0;
    string series;
    cin>>t;
    for(int i=0; i<t; i++){
        cin>>series;
        for(int j=0; j<series.length(); j++){
            if((series[j]>='0' && series[j]<='6') || series[j]=='O'){
                cont++;
            }
        }
        if(cont>=6){
            int over=cont/6;
            if(over==1){
                cout<<over<<" OVER ";
            }else if(over>1){
                cout<<over<<" OVERS ";
            }
            int ball=cont%6;
            if(ball==1){
                cout<<cont%6<<" BALL"<<endl;
            }else if(ball>1){
                cout<<cont%6<<" BALLS"<<endl;
            }else{
                cout<<endl;
            }
        }else{
            int ball=cont%6;
            if(ball==1){
                cout<<cont%6<<" BALL"<<endl;
            }else if(ball>1){
                cout<<cont%6<<" BALLS"<<endl;
            }
        }
        cont=0;
    }

    return 0;
}
