#include<iostream>
#include<climits>
using namespace std;




int main(){int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
cin>>arr[i];}

int max[n];

int max_val=INT_MIN;

for(int i=0;i<n;i++){
    if(arr[i]>max_val){
        max_val=arr[i];
        max[i]=max_val;
    } 
    else{
        max[i]=max_val;
    }
}

for (int i=0;i<n;i++){
    cout<<max[i];
}


}