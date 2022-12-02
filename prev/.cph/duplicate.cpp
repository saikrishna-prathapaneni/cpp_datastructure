
#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;



class Solution {
public:
    bool func(vector<int> &arr, int N, int ind, int sum, int s){
        
        if(s==sum && ind<=N){
            return true;
        }
        if(sum>s)
        return false;

        bool left = func( arr,N,ind+1,sum+arr[ind],s);
       bool right =func( arr,N,ind+1,sum,s);
        return (left || right);
    }
    bool canPartition(vector<int>& nums) {
        int sum =0;
        int N = nums.size();
        for(int i=0;i<N;i++){
            sum+=nums[i];
        }
        if(sum%2!=0) return false;
        
        return func( nums, N,0,0,sum);
    }
};



int main(){
    vector<int>arr={1,5,11,5};
    Solution s;
    cout<<s.canPartition(arr);
}