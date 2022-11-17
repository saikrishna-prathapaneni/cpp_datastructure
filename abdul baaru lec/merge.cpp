#include <iostream>

using namespace std;






void merge(int arr[], int start, int mid, int end){


int nl = (mid - start)/2;
int nr = (end -start)/2;
int *left = new int[nl];
int *right = new int[nr];

     for(int i=start; i<nl;i++){
        left[i]= arr[i];
     }
     
     for(int i=mid; i<nr;i++){
        right[i]= arr[i];
     }

 int i=0
 while(nl>0&&nr>0){
    if (arr[])
 
 while(l<nl && r<nr){

 }
 
 }





void merge_sort(int arr[], int start, int end){



if (start>=end)
return;
int mid = (start + end)/2;

merge_sort(arr,start,mid);
merge_sort(arr,mid+1,end);
merge(arr,start, mid,end);

}




int main(){
 

int arr[]={2,1,22,7,23,9,1,90,81};
 merge_sort(arr);

for(int i=0;i<9;i++){
    cout<<arr[i]<<endl;
    }

}