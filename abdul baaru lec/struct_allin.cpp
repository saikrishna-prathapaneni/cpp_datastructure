#include <iostream>

using namespace std;

struct rec{
int l;
int b;
};

int area(struct rec a){

return a.l*a.b;
}
void initialize(struct rec *pt,int a, int br){
pt->l=a;
pt->b=br;

}

void change(struct rec *pt, int value){
    pt->l=value;
}

int main(){
struct rec r1;

initialize(&r1,10,20);
cout<<area(r1)<<" "<<endl;
change(&r1,30);
cout<< r1.l<<r1.b<<endl;
}