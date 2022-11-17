#include<iostream>
using namespace std;

int power(int val){

    if(val==0){
        return 1;
    }
   else{
    return power(val-1)*(val);

}}

int main()

{
    int val;
    cin >> val;
   cout<< power(val);
}