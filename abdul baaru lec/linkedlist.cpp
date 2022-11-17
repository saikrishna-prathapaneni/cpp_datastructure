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

 
  

struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2){
   
  
    
    struct ListNode *new_,*t,*last,*l11=l2,*l22=l1;
    int carry=0;

    new_ =  (struct ListNode *)malloc(sizeof(struct ListNode));
    new_->next=NULL;
    // // new_->data=0;
    last=new_;
    int len1=0,len2=0;
    int d= l1->data+l2->data;
    if(d>9){
        carry=1;
        new_->data=d%10;
            //cout<<"carry"<<data<<endl;

    }
        else{
            carry=0;
        new_->data=d;
        
        // cout<<"No carry"<<data<<endl;
        }
    l1=l1->next;
        l2=l2->next;

    while(l1!=NULL&& l2!=NULL)
    {  
    
        int data=0;
    t= (struct ListNode *)malloc(sizeof(struct ListNode));
        
    
    //new_=t;
    data=l1->data+l2->data+carry;
    // cout<<data<<endl;
    if(data>9){
        carry=1;
        t->data=data%10;
            //cout<<"carry"<<data<<endl;

    }
        else{
            t->data=data;
            carry=0;
        // cout<<"No carry"<<data<<endl;
        }

    
    t->next=NULL;
        l1=l1->next;
        l2=l2->next;
    last->next=t;
    last=t;

                
            
    }
    while(l1){
        d=l1->data+carry;
        t= (struct ListNode *)malloc(sizeof(struct ListNode));
        t->next=NULL;
        
        
        if(d>9){
            t->data=d%10;
            carry=1;
            
        }
        else{
            t->data=d;
            carry=0;
        
        }
        l1=l1->next;
        last->next=t;
    last=t;
    

    }
    while(l2){
        d=l2->data+carry;
        t= (struct ListNode *)malloc(sizeof(struct ListNode));
        t->next=NULL;
        
        
        if(d>9){
            t->data=d%10;
            carry=1;
            
        }
        else{
            t->data=d;
            carry=0;
        
        }
        l2=l2->next;
    last->next=t;
    last=t;
    

    }

    return new_;
}


void display(struct ListNode *first){
    ListNode *ptr=first;

    while(ptr!=NULL){
       cout<<ptr->data<<endl;
       ptr=ptr->next;
    }

}



void count(ListNode *p){
    int len=0;
    while (p!=NULL){
        len++;
        p=p->next;
    }
cout<<len<<endl;
}
int get_length(ListNode *p){
      int len=0;
    while (p!=NULL){
        len++;
        p=p->next;
    }
    return len;
}
ListNode* middleNode(ListNode* head) {
        ListNode* ptr = head; int num=0;
        int len = get_length(head);
        cout<<len<<endl;
        if(len%2==0){

            while(num==((len/2)+1)){
                num++;
                ptr= ptr->next;
                cout<<"here";
                 cout<<"data"<< ptr->data<<endl;
            }

        }else{
                
            while (num==len/2){
                num++;
                ptr= ptr->next;
                cout<<"data"<< ptr->data<<endl;
            }
        }
        return ptr;
    }
// int sum(ListListNode *p){
//     int sum =0;
//     if(p!=NULL){
//         return sum(p->next);
//     }
//     else{
//         return p->data;
//     }
//     cout<<sum<<endl;
// }

int main(){

 
 int a[]={4,1,2}; int b[]={2,8,8,1,2};

 struct ListNode *l2=updatedata(b,5);

 //struct ListNode *l1=updatedata(a,3);
 struct ListNode *e=middleNode(l2);
 
//   if(e!=NULL){
//     cout<<"found"<<e->data<<endl;
//  }
//  else{
//     cout<<"not found"<<endl;
//  }
//Rdisplay(e);
 //Rdisplay(e);
 //struct ListNode *l2=updatedata(b,5);
 


 //Rdisplay(addTwoNumbers(l1,l2));
 //count(first);
 //sum(first);

}