#include <iostream>
using namespace std;

int * arr( int n){
    int *ar = new int[n];
    for(int i=0; i<n; i++){
        *(ar+i)=i+1;
    }
    return ar;
}

int main(){

int n=5;
int *ar = arr(n);

for(int i=0; i<n; i++)
cout<<ar[i]<<endl;
}