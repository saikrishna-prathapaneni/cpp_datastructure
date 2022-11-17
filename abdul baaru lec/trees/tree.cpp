#include <iostream>
#include "circQueclass.cpp"

using namespace std;


struct Node *root;

void createtree(){
    Queue Q;
    Node *p,*t;
    int x;
    create(&Q,100);
    
    root = new Node;
    cout<<"enter root values"<<endl;
    cin>>root->data;
    
    root->lchild =NULL;
    root->rchild = NULL;
    enqueue(&Q,root);
    
    while(!isEmpty(Q)){
        p=dequeue(&Q);
        cout<<"enter lchild values of "<<p->data<<endl;
        cin>>x;
        if (x !=-1){
                    t = new Node;
            
            t->data=x;
            
            t->lchild =NULL;
            t->rchild = NULL;
            p->lchild=t;
            enqueue(&Q,t);
        }
        cout<<"enter rchild values of "<<p->data<<endl;
        cin>>x;
        if (x !=-1){
                    t = new Node;
            
            t->data=x;
            
            t->lchild =NULL;
            t->rchild = NULL;
            p->rchild=t;
            enqueue(&Q,t);
        }
    }
}

void preorder(Node *p){
    if(p){
    cout<<p->data<<endl;
    preorder(p->lchild);
    preorder(p->rchild);
    }
    
}


Node* createNode(int val){
    Node *t;
    t->lchild = NULL;
    t->rchild = NULL;
    t->data = val;
return t;
}

void inorder(Node *p){
    if(p){
        inorder(p->lchild);
        cout<<p->data<<endl;
        inorder(p->rchild);
    }
}



void postorder(Node *p){
    if(p){
        postorder(p->lchild);
        postorder(p->rchild);
        cout<<p->data<<endl;
        
    }
}


Node* search(Node *p, int val){
if( p==NULL){
    return NULL;
}
if (p->data==val){
    return p;
}
else{
    if (p->data>val){
        return search(p->lchild,val);
    }
    else{
        return search(p->rchild,val);
    }
}

}


void insert(Node *j,int val){

    Node *k=NULL;

    while(!j){
        if(j->data==val){
            return;
        }
        if (j->data>val){
            k=j;
            j=j->lchild;
        }
        else{
            k=j;
            j=j->rchild;
        }
        cout<<j->data<<" ";
    }
    if (k->data>val){
        k->lchild=createNode(val);
    }
    else{
        k->rchild=createNode(val);
    }

}

int main(){
createtree();
//preorder(root);
//inorder(root);
//postorder(root);
postorder(root);
insert(root,45); 
// Node *i=search(root,10);    
// cout<<i->data<<endl;
postorder(root);

}

