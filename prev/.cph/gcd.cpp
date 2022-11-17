#include<iostream>
using namespace std;

int main(int argc, char** argv){


    int a,b;
   
     int temp;
    cin >> a >> b;
    while (b!=0){
        temp=a%b;
        a=b;
        b=temp%a;
    }
cout<<a;
}