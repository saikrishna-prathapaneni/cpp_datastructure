#include <iostream>

using namespace std;

void swap(int *a, int *b){
    int temp;
temp=*a;
*a=*b;
*b=temp;

}

void select(int arr[], int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[i]){
                swap(&arr[i],&arr[j]);
            }
        }
    }
}



int partition(int arr[], int l, int h){
    int low_ele=l-1,high_ele=l-1;   
    int pivot = arr[h]; 
    int i = l-1; 
    for (int j = l; j <= h - 1; j++) {
       
        if (arr[j] < pivot) {
            i++;
            low_ele++; 
            swap(&arr[i], &arr[j]);
        }
        else if(arr[j]==pivot){
            
            high_ele++;
            i++;
            swap(&arr[i],&arr[j]);

        }
    }
    swap(&arr[i + 1], &arr[h]);
cout <<(low_ele+1)<<(high_ele+1);
    return (i + 1);

}

int *partition_a(int arr[],int p, int r){
    int pivot=arr[p]; int *ret = new int[2];
     int low=p;
     int high =p;
     for(int j=p+1; j<=r;j++){
        if(arr[j]<pivot){
            int y=arr[j];
            arr[j]=arr[high+1];
            arr[high+1]=arr[low];
            arr[low]=y;
            low++;
            high++;
        }
        else if(arr[j]==pivot){
swap(&arr[j],&arr[high+1]);
high++;
        }
        
     }

ret[0]=low; ret[1]=high;

cout<<low<<" "<<high<<"\n"<<endl;
return ret;
}


void quicksort(int arr[],int p, int r){
    if(p<r){
        int *q = partition_a(arr,p,r);
quicksort(arr,p,q[0]-1);
quicksort(arr,q[1]+1,r);

    }
    
}
int main()
{
    int arr[6]={3,12,1,2,4,3};
    int size=6;
    // select(arr,6);
    // for(int i=0; i<size; i++)
  //partition_a(arr,0,5);
  quicksort(arr,0,5);
      for(int i=0; i<size; i++)
      cout<<arr[i]<<endl;

}