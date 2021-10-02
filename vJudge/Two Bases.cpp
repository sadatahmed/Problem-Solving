#include <bits/stdc++.h>
using namespace std;

vector <long long int> listX;
vector <long long int> listY;

int main(){
    long long int x, y, bx, by, xItems, yItems;
    long long int convertY=1, convertX=1;
    long long int totalX=0, totalY=0;
    cin>>x;
    cin>>bx;

    for(int i=0; i<x; i++){
        cin>>xItems;
        listX.push_back(xItems);
    }
    cin>>y;
    cin>>by;

    for(int i=0; i<y; i++){
        cin>>yItems;
        listY.push_back(yItems);
    }

    //reverse the list
    reverse(listX.begin(), listX.end());
    reverse(listY.begin(), listY.end());

    for(int i=0; i<x; i++){
        totalX+=listX[i]*convertX;
        convertX*=bx;
    }

    for(int i=0; i<y; i++){
        totalY+=listY[i]*convertY;
        convertY*=by;
    }

    if(totalX==totalY) cout<<"=";
    else if(totalX<totalY) cout<<"<";
    else cout<<">";

    return 0;
}
