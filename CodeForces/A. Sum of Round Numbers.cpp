#include <bits/stdc++.h>
using namespace std;
vector <int> vec;

void roundNumber_list(){
    for(int i: vec){
        cout<<i<<" ";
    }
    cout<<endl;
    vec.clear();
}

void roundNumber_count(int number){
    int count=0;
    for(int i=10; i<=number*10; i*=10){
        if(number%i!=0){
            vec.push_back(number%i);
            number-=(number%i);
            count++;
        }
        //if number=110 (corner case)
        else if(number%10==0){
            continue;
        }
        else{
            count++;
            vec.push_back(number);
            break;
        }
    }
    cout<<count<<endl;
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
