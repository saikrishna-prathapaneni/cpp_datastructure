
#include <iostream>
#include <bits/stdc++.h>
using namespace std;



class MedianFinder {
   priority_queue <int, vector<int>, greater<int> > min;
   priority_queue <int, vector<int>, less<int> > max;    

public:
    MedianFinder() {
         
    }
    
    void addNum(int num) {
       
        if((max.empty() and min.empty() )or (max.top()>num)) max.push(num);
        else 
            min.push(num);
        
        int l_max= max.size(); int l_min= min.size(); 
            if(l_min-l_max>1){
              max.push(min.top());
              min.pop();  
            }else if(l_max-l_min>1){
                min.push(max.top());
              max.pop();
            }
    }
    
    double findMedian() {
        int l_max= max.size(); int l_min= min.size();
        //cout<<l_max<<"sss "<<l_min<<endl;
        // if (l_max ==l_min==0)
        // return 0;
  

            if ((l_max-l_min)==0){
                cout<<"min"<< min.top()<<"max"<< max.top()<<"avg" <<(min.top()+max.top())/2<<endl;
                return (min.top()+max.top())/2.0;
            }else{
                if (l_max>l_min)
                return max.top();
                else
                return min.top();
            }
            
        
       
    }
};

int main(){
    MedianFinder *medianFinder = new MedianFinder();
medianFinder->addNum(-1);    // arr = [1]
medianFinder->addNum(-2);    // arr = [1, 2]
cout<<medianFinder->findMedian(); // return 1.5 (i.e., (1 + 2) / 2)
medianFinder->addNum(-3);    // arr[1, 2, 3]
cout<<medianFinder->findMedian(); // return 2.0
}