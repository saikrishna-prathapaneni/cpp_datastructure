#include <iostream>
#include <vector>



using namespace std;


struct ListNode{
    int data;
    ListNode *next;
}*root=NULL;

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


void Insert(ListNode *newstr, int value,int n, int ind){

 if (n==0){
    ListNode *t= new ListNode;
    t->data= value; 
    t->next= newstr;
    root= t;
     while(root){
        cout<< root->data<<" ";
        root=root->next;
    }
    return;
 }
if(ind==n){
    ListNode *k=NULL;
    ListNode *t= new ListNode;
    t->data= value;
    k= newstr->next;
    newstr->next=t; 
    t->next= k;
    return;
}
Insert(newstr->next, value, n, ind+1);
    
}

int main(){

    
    int a[6]={1,2,8,10,3};
    ListNode *root= updatedata(a,6);
    Insert(root, 8,0,0);
    while(root){
        cout<< root->data<<" ";
        root=root->next;
    }


}