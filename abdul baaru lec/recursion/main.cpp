#include <iostream>
#include <vector>


using namespace std;



void sum(int ar[], vector<int> &sub,int total,int ind, int n){

    if(ind==3){
           for(int i=0;i<sub.size();i++){
                cout << sub[i] <<" "; 
            }
            cout<<endl;
        if(total==n){
            for(int i=0;i<sub.size();i++){
                cout << "sae "<<sub[i] <<" "; 
            }
            cout<<endl;
        } 
        
    return;
    }
    sub.push_back(ar[ind]);
    total=total+ar[ind];
    sum(ar,sub,total,ind+1,n);
    
    total=total-ar[ind];
    sub.pop_back();
    sum(ar,sub,total,ind+1,n);
}




int main(){
    int ar[]={1,2,1};
    int total=0;
    vector<int> s;
    sum(ar,s,total,0,2);
}