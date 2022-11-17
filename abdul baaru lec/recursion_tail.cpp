
#include <iostream>
using namespace std;

void fun(int n){
    if(n>0){
    fun(n-1);  // its head recursion as well()  
    cout << n<<endl; // because all the work needs to be done while returning

    
    }

}

int main(){

fun(10);
}