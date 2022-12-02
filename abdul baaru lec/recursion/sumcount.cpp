#include <iostream>
#include <vector>


using namespace std;



int sum(int ar[], vector<int> &sub,int total,int ind, int n){

    if(ind==3){
        if(total==n){
           return 1;
        }     
    return 0;
    }
    sub.push_back(ar[ind]);
    total=total+ar[ind];
    int l=sum(ar,sub,total,ind+1,n);
    
    total=total-ar[ind];
    sub.pop_back();
    int r = sum(ar,sub,total,ind+1,n);
    return l+r;
}

int main(){
    int ar[]={1,2,1};
    int total=0;
    vector<int> s;
    cout<<sum(ar,s,total,0,2)<<endl;
}