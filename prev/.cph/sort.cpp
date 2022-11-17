#include<iostream>

using namespace std;




int main(){
    int n;
    cin >>n;

    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin >>arr[i];

    }
    int index = 0;
    int min = 0;
    for(int i=index; i<n; i++)
     {
        if (arr[i]=>min){
           cout<<arr[i]<<"min value "<< i<<min<<endl;
            min=arr[i];
            int c;
            c=arr[index];
            arr[index]=arr[i];
            arr[i]=c;
            index++;
           
        } 
       

     }
     for(int i=0; i<n; i++)
     cout<<arr[i]<<endl;

}