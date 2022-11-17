#include <iostream>
#include <vector>



using namespace std;

void subarray(int index,vector<int> &ar,int arr[], int n){
if(index ==n){
    for (auto it : ar){
        cout << it;
    
    }; cout << endl;
    return;
};

ar.push_back(arr[index]);
subarray(index+1,ar,arr,n);
ar.pop_back();
subarray(index+1,ar,arr,n);

}

int main(){
    vector<int> ds;

    int arr[3]={1,2,3};


    subarray(0,ds,arr, 3);


}