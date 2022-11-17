#include <iostream>

using namespace std;

void print( int origin, int destination){

cout<< "Move the top disk from rod"<< origin << "to rod " << destination<<endl; 
}


int help(int start,int end){
if (start==0 && end==1)
    return 2;
if (start==0 && end ==2)
return 1;
if (start==1&&end ==2)
return 0;
}
void move(int n,int start, int end){
    int val=help(start,end);
//cout<< val<<endl;
    if (n>0){
        
    
    move(n-1,start,val); 
   print(start,end);
   move(n-1,val,end);
 
    }


}
int main(){
    int n =2;
move(3,0,2);
}