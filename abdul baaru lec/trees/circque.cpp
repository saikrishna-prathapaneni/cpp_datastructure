#include <iostream>
#ifndef circque_h
#define circque_h

using namespace std;



struct Queue {
    int len;
        int front;
        int rear;
        int *Q;
}*front,*rear;
       



    
    void createQueue(Queue *q, int d){
    if ((q->rear+1)%q->len == q->front){
        cout<<"Queue is full!"<<endl;
        
        }
    
    else{
    
        q->rear=(q->rear+1)%q->len;
        q->Q[q->rear]=d;

    }
    
}

void deQueue(Queue *q){
    if(q->front == q->rear){
        cout<<"Queue is empty!"<<endl;
    }
    else{
        
        q->front=(q->front+1)%q->len;
    int d=q->Q[q->front];
    cout<<"Queue deleted element "<<d<<endl;
    }
}

void displayQueue(Queue *j){
    int i =j->front+1;
      if(j->front == j->rear){
        cout<<"Queue is empty!"<<endl;
    }
    else{
   
   do{
    cout<<j->Q[i]<<endl;
    i=(i+1)%j->len;
   }
   while(i!=(j->rear+1)%j->len);   

}}










#endif