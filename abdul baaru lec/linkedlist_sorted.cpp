#include <iostream>

using namespace std;


struct ListNode{
    int val;
    struct ListNode *next;
}*first;

ListNode* NewNode(int data){
 ListNode *t= new ListNode;
    t->val = data;
    t->next =NULL;
    return t;
}


bool checksort(ListNode*p){
ListNode *q=p->next,*t=p;
bool sort=true;
while(q){
    
    if(q->val<t->val){
       
        sort=false;
        break;
    }

    t=q;
        q=q->next;
    
}
return sort;
}

void insertInSortedList(ListNode *p, int val){

    ListNode *t=NewNode(val),*q=p;
    if(p==NULL){
        first=t;
    }
    else if(p->val> t->val){
        first=t;
        t->next=p;

    } else{
    while(p&&p->val<= t->val){
    q=p;
    p=p->next;
    }
    t->next=q->next;
    q->next=t;

    }
}


void insert_data(int arr[],ListNode *p,int n){
     
    ListNode *t=p,*k;

    t->val = arr[0];
    t->next=NULL;

    for(int i=1;i<n;i++){

         k = NewNode(arr[i]);
         t->next=k;
         t=t->next;
    }
  
}

void removeDiplicates(ListNode *p){
    ListNode *q=p->next;
    while(q!=NULL){
        if(p->val!=q->val){
            p=q;
            q=q->next;
            
        }
        else{
            p->next = q->next;
            
            delete(q);
            q=p->next;

        }
    }

}

int main(){
    int arr[]={1,1,2,8,11,11,20};
   first=new ListNode;
   insert_data(arr,first,7);
  //cout<<checksort(first)<<endl;
    //   insertInSortedList(first,0);
    //   insertInSortedList(first,0);
    //   insertInSortedList(first,0);
    //   insertInSortedList(first,0);
    // insertInSortedList(first,30);
    //  insertInSortedList(first,90);
    //  insertInSortedList(first,90);
    //  insertInSortedList(first,12);
     removeDiplicates(first);
    //   cout<<checksort(first)<<endl;
    while(first){
        cout<<first->val<<endl;
        first=first->next;
    }
}
