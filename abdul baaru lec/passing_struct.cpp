#include <iostream>
#include <string.h>

using namespace std;

struct st{
    string name;
    int roll;
};

int main(){
struct st *s1= new st;

s1->name="sai";
s1-> roll=1;

cout<<s1->name<<endl;

}