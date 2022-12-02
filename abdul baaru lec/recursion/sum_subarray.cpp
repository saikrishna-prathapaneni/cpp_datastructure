#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;



class Solution {
public:
    void sum(vector<int>& arr, vector<int> sub, int i,int *s){
        if(i>arr.size()-1){
            int e = *min_element(sub.begin(), sub.end());
            for(auto i: sub)
            cout<<i<<" ";
            cout<<endl;
            *s=*s+e;
            
            return; 
        }
        sub.push_back(arr[i]);
        sum(arr,sub,i+1,s);
        
        sub.pop_back();
        sum(arr,sub,i+1,s);
    }
   
};

int main(){
    vector<int>arr={3,1,2,4};
        vector<int>sa;
        int s=0;
        
        int i=0;
        Solution solution;
        solution.sum(arr,sa,i,&s);
        cout<<s;
    
}