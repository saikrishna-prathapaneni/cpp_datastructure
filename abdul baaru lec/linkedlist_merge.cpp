#include <iostream>
using namespace std;

  struct ListNode {
      int val;
      struct ListNode *next;
  };
 
struct ListNode* updatedata(int *arr, int n){
  struct ListNode *t,*last,*first;
  first= new ListNode;
  //cout<<first<<endl;
  first-> next =NULL;
  first->val=arr[0];
  last=first;
  
  for(int i=1; i<n; i++){
   t=new ListNode;
   t->val =arr[i];
   t->next =NULL;
   //cout<<f<<endl;
   last->next=t;
   last=t;
  }
return first;
}

 

struct ListNode* newNode(int d){
    struct ListNode *new_=  new ListNode;
    new_->val=d;
    new_->next=NULL;
    return new_;
}

struct ListNode* Insert(struct ListNode*first,struct ListNode *p, int index, int count){
    struct ListNode *h1=first,*k=first;
    if (index<0){
        return first;}
    else if (index==0){
        p->next=first->next;
        first= p;
        return first;
    }
    else{
        for(int i=0;i<index-1&&k;i++){
            
            k=k->next;
        }
       
        
        p->next=k->next;
        h1->next=p;
        return first;
    }
}

struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2){
struct ListNode* li1=list1,*li2=list2,*ptr;
int len1=0,len2=0;
while(li1){
    li1=li1->next;
    len1++;
}
while(li2){
    li2=li2->next;
    len2++;
}
cout<<"len "<<len1<<" "<<len2<<" "<<endl;
while(li2!=NULL){
for(int i=0;i<len1;i++){
    int num= li2->val;
    ptr=li1;
    li1=li1->next;
    
    if(ptr->val>=num<li1->val){
        struct ListNode *n=newNode(li1->val);
        list2=Insert(list2,n,i+1,len2);
        len1++;
        
    }
    
    }
    li2=li2->next;
}
    return list2;
}

int main(){
     
 int a[]={4,1,2}; int b[]={2,8,1,2};

 struct ListNode *l2=updatedata(b,4);
 struct ListNode *l1=updatedata(a,3);
 //struct ListNode *merge=mergeTwoLists(l1,l2);
 struct ListNode *new_li=Insert(l1,newNode(5),2,3);
 while(new_li!=NULL){
    cout<<new_li->val<<endl;
    new_li=new_li->next;
 }
}