#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        
        int l=0; int r= nums.size()-1;
        //cout<<l<<r<<endl;
        int leftsum=nums[l]; int rightsum=nums[r];
        while(r>=l){
            if (leftsum>rightsum){
                r--;
                rightsum+=nums[r];
            }
            else if (leftsum<rightsum){
                l++;
                leftsum +=nums[l];
            }
           // cout<<"left  "<< leftsum << "right  "<< rightsum <<" " <<r <<" " << l << endl;

            if(leftsum==rightsum && (r-l==2)){
                //cout<<(r+l)/2<<endl;
                return (r+l)/2;
            }
            else if(r==l && leftsum==0){
                //cout<< "here"<<endl;
                return nums.size();
            }
            else if (r==l && rightsum==0){
              //  cout<< "here.."<<endl;
                return 0;
            }
        }
        return -1;
    }
};








class StockSpanner {

struct Node{
    int data;
    Node *next;
}*root;

public:
    StockSpanner() {
      root =nullptr;              
    }
    
    int next(int price) {
        
        
        if (root==nullptr){
            root = new Node;
            root-> data = price;
            root-> next =nullptr;
            return 1;
        }
            Node *t=root;    int span=1;    
        while(t->next!=nullptr){
             if(t->data>price){
                 span++;
             }
             t=t->next;
             }
            Node *val= new Node;
            val->data= price;
            val->next =nullptr;
            t->next = val;
        return span;
    }
};

int main(){
//StockSpanner obj;
Solution s;
vector<int> val={-1,3,4,4,0,1,6};

cout<<s.pivotIndex(val) <<endl;
}