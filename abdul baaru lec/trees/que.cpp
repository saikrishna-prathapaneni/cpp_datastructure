#include <iostream>


using namespace std;

struct Queue{
    int len;
    int front;
    int rear;
    int *Q;
};

void createQueue(Queue *q, int d){
if (q->front ==-1){
    q->front ++;;
}
    q->rear++;
    q->Q[q->rear]=d;

}

void deQueue(Queue *q){
    if(q->front > q->rear){
        cout<<"Queue is empty!"<<endl;
    }
    else{
        int d=q->Q[q->front];
        q->front++;
    cout<<"Queue deleted element "<<d<<endl;
    }
}

void displayQueue(Queue *q){
    
      if(q->front > q->rear){
        cout<<"Queue is empty!"<<endl;
    }
    
    for(int i= q->front;i<=q->rear;i++){
cout<<q->Q[i]<<endl;
    }
}



int main(){
    int arr[8]={1,4,1,9,10,2,112,24};
      
    
    Queue *q = new Queue;
    q->front = -1;
    q->rear = -1;
    int n=10;
    q->Q= new int[n];
    createQueue(q,20);  
    createQueue(q,10);
    createQueue(q,110);
    deQueue(q);    

       deQueue(q);    

    displayQueue(q);

      

}