#include <iostream>
using namespace std;


struct Rec{
    int name;
    int roll;
};

int main(){

 Rec R1={1,10};
 Rec *p =&R1;
 cout << "address"<<(*p).name<<endl; 
cout << "through ref "<< p->name << endl;
}