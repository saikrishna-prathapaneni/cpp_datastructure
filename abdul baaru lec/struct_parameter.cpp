#include <iostream>

using namespace std;

struct rec{
int l;
int b;
};

int area(struct rec *ab){

return ab->l*ab->b;

}

int main(){
struct rec a = {10,12};

cout<< area(&a) << endl;

}