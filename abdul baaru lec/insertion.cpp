#include <iostream>

using namespace std;



void swap(int *x, int *y){
    int temp=*x;
    *x=*y;
    *y=temp;
}

void insert(int arr[],int n){

for(int i=1;i<n;i++){
    int key=arr[i];
    int j=i-1;
    while(j>=0 && key<arr[j]){
        
      swap(&arr[j+1],&arr[j]);
      j--;

    }
arr[j+1]=key;
}



}

int main (){
int arr[]={2,1,22,7,23,9,1,90,81};
 insert(arr,9);

for(int i=0;i<9;i++){
    cout<<arr[i]<<endl;
    }

}