#include <bits/stdc++.h>
using namespace std;

struct Auction{
    int value, position;
    Auction* next;
    //Auction* secondHight;
    Auction(int val, int pos){
        value=val;
        position=pos;
        next=NULL;
    }
};
Auction* head=NULL;

void addToList(int val, int pos){
    if(head==NULL){
        head=new Auction(val, pos);
        return;
    }
    Auction* current = head;
    while(current->next!=NULL){
        current = current->next;
    }
    current->next=new Auction(val, pos);
}

void finding_auctionResult(Auction* head){
    int temp=0;
    int secondHight=0;
    int position;
    while(head!=NULL){
        if(temp>head->value && secondHight<head->value){
            secondHight=head->value;
        }
        if(temp<(head->value)){
            secondHight=temp;
            temp=head->value;
            position=head->position;
            head=head->next;
        }else{
            head=head->next;
        }
    }
    cout<<position<<" "<<secondHight;
}

int main(){

    int n, val;
    cin>>n;
    for(int i=1; i<=n; i++){
        cin>>val;
        addToList(val, i);
    }

    finding_auctionResult(head);

    return 0;
}
