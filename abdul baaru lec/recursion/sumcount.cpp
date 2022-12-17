#include <iostream>
#include <vector>


using namespace std;



int sum(vector<int> &ar, vector<int> &sub,int total,int ind, int n){

    if(ind==ar.size()){
        if(total==n&& sub.size()==2 ){
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
    vector<int> ar={40,20,60,30,10};
    int total=0;
    vector<int> s;
    cout<<sum(ar,s,total,0,60)<<endl;
}