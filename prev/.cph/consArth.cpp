#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
 
    int record = 0;

    for (int i=0; i < n; i++){
           int index=0;
        bool flag1=true;
        bool flag2=false;
        while(index<=i){
               if (arr[index]>arr[i]){
                   flag1=false;
                   break;
               }
               index++;  
        }
        if (arr[i]>arr[i+1]){
                   flag2=true;
               }
        if (flag1 && flag2){
        record++;
        cout<<arr[i];
        
        }

}
cout<<record<<endl;
     

}