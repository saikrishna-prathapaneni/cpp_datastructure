#include <vector>
#include <iostream>


using namespace std;



class cycleDFS{
public:
 bool dfs(vector <int> arr[] ,int vis[], int element, int prev)
 {      
        vis[element]=1;   
        for(auto i : arr[element]){
            cout<<" i: "<<i<<" element "<<element<<endl;
            if (vis[i]!=1){
                if (dfs(arr,vis,i, element)) return true;
                
            }
            else if (i!= prev){
                return true;
            }

            }
                return false;
        }
             
 };
    

int main(){
     vector<int> adj[7];
    adj[0]={1,4};
    adj[1] ={2,3,0};
    adj[2] ={1};
    adj[3] = {1};
    adj[4] = {5,6,0};
    adj[5] ={4};
    adj[6] ={6}; 


cycleDFS d; int v[7];
    cout<<"dfs cycle"<< d.dfs(adj,v,0,-1); 

}