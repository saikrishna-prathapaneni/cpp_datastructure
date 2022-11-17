#include <iostream>
using namespace std;





struct ListNode{
    int data;
    struct ListNode *next;
};


void Rdisplay(ListNode *p){

if (p!=NULL){
    cout<<"--"<<endl;
    cout<<p->data<<endl;
    Rdisplay(p->next);
}
}


struct ListNode *search(ListNode* val,int ele)
{
    ListNode *ptr=val,*q=NULL;
    
    while (ptr!=NULL){
        
       
        if (ele==ptr->data){
            
            q->next=ptr->next;
            ptr->next=val;
            val=ptr;
            Rdisplay(val);
        
            return ptr;
            
        }
        q=ptr;
        ptr=ptr->next;
        
    }
    return NULL;

}

struct ListNode* updatedata(int *arr, int n){
  struct ListNode *t,*last,*first;
  first= new ListNode;
  //cout<<first<<endl;
  first-> next =NULL;
  first->data=arr[0];
  last=first;
  
  for(int i=1; i<n; i++){
   t=new ListNode;
   t->data =arr[i];
   t->next =NULL;
   //cout<<f<<endl;
   last->next=t;
   last=t;
   
  }
return first;
}

int main(){
  int b[]={2,8,8,1,2};

 struct ListNode *l2=updatedata(b,5);

 //struct ListNode *l1=updatedata(a,3);
 struct ListNode *e=search(l2,2);
 
  if(e!=NULL){
    cout<<"found"<<e->data<<endl;
 }
 else{
    cout<<"not found"<<endl;
 }
Rdisplay(l2);

}
