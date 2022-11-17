#include <iostream>

using namespace std;

struct ListNode{
    struct ListNode *prev;
    int data;
    struct ListNode *next;
}*first;

struct ListNode* newNode(int val){
    ListNode* temp=new ListNode;
    temp->prev=NULL;
    temp->data= val;
    temp->next=NULL;
return temp;
}

void initialize(int *arr,int n)
{
    struct ListNode *t,*last;
    
    first =new ListNode;
    first->data =arr[0];
    first->prev =NULL;
    first->next=NULL;
    last=first;

    for(int i=1; i<n; i++) {
        t=newNode(arr[i]);
    
        t->next =NULL;
        t->prev=last;
        last->next=t;
        last=t;
    }
    
}

void display(ListNode *p){
    
    while(p!=NULL){
        cout<<"  "<<p->prev<<"  "<<p->data<<"  "<<p->next<<endl;
        p=p->next;

    }
}

int main(){

    int data[]={0,12,1,2,3};
    initialize(data,5);
    display(first);

}
