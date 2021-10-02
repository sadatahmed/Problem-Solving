#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    string name;
    string ara[]={"vaporeon", "jolteon", "flareon", "espeon", "umbreon", "leafeon", "glaceon", "sylveon"};
    cin>>n;
    cin>>name;

    for(int i=0; i<8; i++){
        string temp_pokemon=ara[i];
        if(n==temp_pokemon.length()){
            int flag=0;
            for(int j=0; j<temp_pokemon.length(); j++){
                if(name[j]!='.' && name[j]!=ara[i][j]){
                    flag=1;
                    break;
                }
            }
            if(flag==0){
                cout<<ara[i];
            }
        }
    }

    return 0;
}
