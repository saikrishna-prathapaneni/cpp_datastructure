#include <string.h>
#include <iostream>
using namespace std;


void pi(string data){
   if(data.length()==0)
   return;
   if(data[0]=='p'&&data[1]=='i'){
       cout<<"3.14";
       return pi(data.substr(2));
   }
   else{
       cout<<data[1];

   return pi(data.substr(1));
   }

}



int main(){

    pi("pipssaspipaaspi");


}