#include <string.h>
#include <iostream>
using namespace std;

void reverse(string str){
    if(str.length()==0){
    return;
    }
 
    string result= str.substr(1);
    return reverse(result);
    cout<< str[0];
}



int main(){

reverse("somesj");

}