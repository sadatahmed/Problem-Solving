#include <bits/stdc++.h>
using namespace std;

//Not completed the problem...!
void dividesBy(int num){
    int ara[100];
    int count=0, int i=0;
    if(num%25==0) cout<<count<<endl;
    else{
        while(num<=0){
            ara[i]=num%10;
            num=num/10;
            i++;
        }
    }

}

int main(){
    int n;
    cin>>n;
    int number;

    for(int i=0; i<n; i++){
        cin>>number;

        dividesBy(number);
    }

    return 0;
}
