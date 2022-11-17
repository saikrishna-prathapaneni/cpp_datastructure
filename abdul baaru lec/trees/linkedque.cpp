#include <iostream>


using namespace std;

struct Node {
    int data;
    Node *next;
}*front=NULL, *rear=NULL;

void push_front(int val){
    Node *t= new Node;
    if (t==NULL){
        cout<<"Error"<<endl;
    }
    else{
        t->data = val;
        t->next = NULL;
        
        if(front==NULL) {
            front=rear=t;
        }
        else{
            rear->next=t;
            rear=t;
        }
        
    }

}

void deQueue(){
    int val;
    Node *p;
    if (front==NULL){
        cout<<"Error No queue"<<endl;
    }
    else{
        p=front;
        val = front->data;
        front = front ->next;
    }
    free(p);

}

void displayQueue(){
    Node *p=front;
    while(p!=NULL){
        cout<<p->data<<endl;
        p=p->next;
    }
}

int main(){
    int arr[8]={1,4,1,9,10,2,112,24};
      

push_front(20);  
push_front(10);
push_front(110);
    deQueue();    

    displayQueue();

      

}