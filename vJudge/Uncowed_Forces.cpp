#include <bits/stdc++.h>
using namespace std;

int main(){
    double score=0;
    int minutes[7];
    int wrongSub[7];
    int hack[2];
    int value[]={500, 1000, 1500, 2000, 2500};

    for(int i=0; i<5; i++){
        cin>>minutes[i];
    }
    for(int i=0; i<5; i++){
        cin>>wrongSub[i];
    }
    for(int i=0; i<2; i++){
        cin>>hack[i];
    }

    for(int i=0; i<5; i++){
        score+=max((0.3*value[i]), ((1-(1.00*minutes[i]/250))*value[i])-(wrongSub[i]*50));
    }
    if(hack[0]!=0){
        score=score+(hack[0]*100);
    }
    if(hack[1]!=0){
        score-=(hack[1]*50);
    }
    cout<<score;

    return 0;
}
