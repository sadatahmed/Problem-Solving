#include <bits/stdc++.h>
using namespace std;


int main(){
    int a, b;
    int matrix[5][5];
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            cin>>matrix[i][j];
            if(matrix[i][j]==1){
                a=i;
                b=j;
            }
        }
    }
    cout<<abs(a-2)+abs(b-2);

    return 0;
}
