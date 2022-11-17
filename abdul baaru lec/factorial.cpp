#include <iostream>

using namespace std;


int pow(int m,int n){
    if(n==0)return 1;
    else return pow(m,n-1)*m;
}

int fact(int n){
    if (n==1)
    return 1;
    else 
    return fact(n-1)*n;
}
int main(){
    cout<<fact(3)<<endl;
    cout<<pow(3,2)<<endl;

}