#include <bits/stdc++.h>
using namespace std;
vector <int> vec;
int k=0;

void roundNumber_list(){
    for(int i: vec){
        cout<<i<<" ";
    }
    cout<<endl;
    vec.clear();
}

void roundNumber_count(int number){
    int k=0;
    for(int i=10; i<=number*10; i*=10){
        if(number%i!=0){
            vec.push_back(number%i);
            number-=(number%i);
            k++;
        }
        else if(number%10==0){
            continue;
        }
        else{
            k++;
            vec.push_back(number);
            break;
        }
    }
    cout<<k<<endl;
    roundNumber_list();
}

int main(){
    int n, num;
    cin>>n;

    for(int i=0; i<n; i++){
        cin>>num;
        roundNumber_count(num);
    }



    return 0;
}
