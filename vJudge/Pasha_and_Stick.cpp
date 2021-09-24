#include <bits/stdc++.h>
using namespace std;
int coun=0;

void possibleRectangle(int height, int width){
    if(height==width) return;
    if(height>width) return;
    coun++;
    possibleRectangle(height+2, width-2);
}


int main(){
    int n;
    cin>>n;
    if(n%2==0){
        possibleRectangle(2, n-2);
    }
    cout<<coun;

    return 0;
}
