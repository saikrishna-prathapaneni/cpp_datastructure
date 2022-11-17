#include <iostream>

using namespace std;

struct rec{
int l;
int b;
};

struct rec * fun(){

    struct rec * p=  new rec;
    p->l=10;
    p->b=12;
return p;
}

int main(){

    struct rec *ptr;
    ptr= fun();
cout<< ptr->l<< ptr->b<< endl;

}