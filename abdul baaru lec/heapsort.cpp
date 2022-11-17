#include <iostream>


using namespace std;



void swap(int *x, int *y){
    int temp=*x;
    *x=*y;
    *y=temp;
}


void insert(int arr[], int i){
    int val=arr[i];
    int j=i;
    while(j>1&& arr[j/2]<val){
        swap(&arr[j/2], &arr[j]);
        j=j/2;
    
    }
}

void remove(int arr[], int n){
    int x=arr[n],i=1,j=2*i;
  

    arr[1]=arr[n];

    while(j<n-1){
        if(arr[j]<arr[j+1])
        j=j+1;

        if(arr[j]>arr[i]){
            swap(&arr[i],&arr[j]);
            i=j;
            j=2*j;
        }
        else{
            break;
        }

    }
        }                     

void heapify(int arr[], int N, int i)
{
 

    int largest = i;
 

    int l = 2 * i + 1;
 

    int r = 2 * i + 2;
 

    if (l < N && arr[l] < arr[largest])
        largest = l;
 
    // If right child is larger than largest
    // so far
    if (r < N && arr[r] < arr[largest])
        largest = r;
 
    // If largest is not root
    if (largest != i) {
        swap(&arr[i],&arr[largest]);
 
        // Recursively heapify the affected
        // sub-tree
        heapify(arr, N, largest);
    }
}

int main(){
    int arr[]={0,1,4,12,25,35,8,12,19,89};
//     for (int i=2; i<8;i++){
// insert(arr,i);
//     }
//    remove(arr,7);
int size = sizeof(arr)/sizeof(arr[0]);

  heapify(arr,0,size);      
        for(int i=0; i<size;i++){
        cout<<arr[i]<<" ";
    }
}