#include <iostream>
using namespace std;


bool iter(int arr[]){
    int val=0;
    
    if( arr[val]>arr[val+1]){
        return false;
    }
    if(arr[val]<arr[val+1] && arr[val+1]<100)
    {
        return iter(arr+1);
    }
    return true;
    
}

int main(){
    int arr[5];
    for(int i=0;i<5;i++)
        cin>>arr[i];
bool val =iter(arr);
if(val){
    cout<<"sorted";
}
else{
    cout<<"not sorted";
}
}

