#include<iostream>
#include<climits>
using namespace std;
int main(int argc, char** argv){
int n;
cin >> n;
cin.ignore();
char sent[n+1];
cin.getline(sent,n);
cin.ignore();
int i = 0,count=0;
int max_val=INT_MIN;
while (true){

if (sent[i]==' '|| sent[i]=='\0'){

max_val=max(max_val,count);
count = 0;
}
else{

  count++;
}

 i++;
if (sent[i]=='\0')
break;
}

cout<<max_val;

}