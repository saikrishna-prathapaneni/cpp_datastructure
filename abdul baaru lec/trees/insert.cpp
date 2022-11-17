#include <iostream>


using namespace std;

class Node{
public:
Node * lchild;
int data;
Node *rchild;
};

class tree{
    Node *root;
    public:
    tree(){
        root=nullptr;
    }
    Node *get_root(){
return root;
    }
void assign(Node *node){
    
}
    Node * _NODE_CREATE( int val){
        Node * n = new Node;
        n->lchild=nullptr;
        n->data=val;
        n->rchild=nullptr;
        return n;
    }

    Node* create(Node *p,int val)
    { Node *t;
        if (p==nullptr){

            t = _NODE_CREATE(val);
        }
 
            
        if(val<p->data){
            p->lchild=create(p->lchild,val);
        }
        else p->rchild=create(p->rchild,val);
    return t;
    }

    void display_preorder(Node* p){
        if(p){
            
            cout<<p->data<<endl;
            display_preorder(p->lchild);
            display_preorder(p->rchild);
        }
    }
};



int main(){
tree f;
f.create(f.get_root(),10);
f.create(f.get_root(),13);
f.create(f.get_root(),14);
f.create(f.get_root(),9);

//root=p.create(root,11);
f.display_preorder(f.get_root());

}