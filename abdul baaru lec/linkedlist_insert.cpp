
#include <iostream>
using namespace std;





struct ListNode{
    int data;
    struct ListNode *next;
}*l1;




struct ListNode* node(int d){
    ListNode* t= new ListNode;
    t->data=d;
    t->next=NULL;
    return t;

}


struct ListNode* updatedata(int *arr, int n){
  struct ListNode *t,*last,*first;
  first= new ListNode;
  //cout<<first<<endl;
  first-> next =NULL;
  first->data=arr[0];
  last=first;
  
  for(int i=1; i<n; i++){
   t=node(arr[i]);
   //cout<<f<<endl;
   last->next=t;
   last=t;
   
  }
return first;
}

void insert(int val,int pos){

ListNode *new_node=node(val),*t,*p=l1;

if (pos==0){
    new_node->next=l1->next;
    l1=new_node;
    
}
else{

for (int i=0; i<pos-1; i++){
p=p->next;
}

new_node->next =p->next ;
p->next=new_node;

}
}

int main(){
int ar[]={1,2,3,4};
l1=new ListNode;
l1->next=NULL;
//l1=updatedata(ar,4);

insert(9,0);
insert(2,1);
insert(10,2);

while (l1!=NULL)
{
    cout<<l1->data<<"   "<<l1->next<<endl;
    l1=l1->next;
}


}