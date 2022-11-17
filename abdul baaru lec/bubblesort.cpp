#include <iostream>


using namespace std;



void swap(int *x, int *y){
    int temp=*x;
    *x=*y;
    *y=temp;
}


void bubble(int *arr, int n){
    for(int j=0; j<n-1;j++){

    for(int i=0; i<n-j-2; i++){
            if (arr[i]>arr[i+1]){
                swap(&arr[i], &arr[i+1]);
            }
   
    }
    }
  

}
int main(){
    int arr[8]={1,4,1,9,10,2,112,24};
 bubble(arr,8);
     for(int i=0; i<8;i++){
        cout<<arr[i]<<" ";
    }
}