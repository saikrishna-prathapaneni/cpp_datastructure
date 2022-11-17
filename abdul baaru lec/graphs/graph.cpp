#include <vector>
#include <iostream>
#include <queue>
using namespace std;

void BFS(vector<int> arr[], int v )
 {
    int vis[v]={0};
    queue<int> q;
    q.push(0);
    vis[0]=1;
    vector<int> bfs;
    
    while (!q.empty())
    {
        int val = q.front();
        q.pop();
        bfs.push_back(val);
        
        for(auto it : arr[val])
        if (!vis[it]){
            vis[it] =1;
        q.push(it);
        }
            /* code */
    }
    for (auto it :bfs)
     cout<<it<<" ";
 
 }



class Checkloop{
    
   
    public:
       
        Checkloop(){
        vector<int> adj[7];
        int vis[7]={0};
        adj[0]={1,4};
        adj[1] ={2,3,0};
        adj[2] ={1};
        adj[3] = {1,5};
        adj[4] = {5,6,0};
        adj[5] ={4};
        adj[6] ={6}; 


    
       // cout<< checkloop(adj)<<endl;
        }

    };


 

 class DFS{
     int timein[7]={0};
        int timeout[7]={0};
         int cnt=0;
    
  private:
        
        void dfs(vector<int> arr[] , int v, int vis[],vector <int> &ls,int timeout[], int timein[],int &cnt ){
                vis[v]=1;
                ls.push_back(v); 
                    timein[v]=cnt++;
                    for(auto node: arr[v]){
                        if(!vis[node]){
                        dfs(arr,node, vis,ls,timeout,timein,cnt);
                        }
                    }
                    timeout[v]=cnt++;
                
            }
        bool search(int timeout[],int timein[], int u, int v ){
            
            bool y=(timein[u] < timein[v]&& timeout[u]>timeout[v]);
            
            return y;
            } 
    public:

        DFS(){
        vector<int> adj[7];
        adj[0]={1,4};
        adj[1] ={2,3,0};
        adj[2] ={1};
        adj[3] = {1,5};
        adj[4] = {5,6,0};
        adj[5] ={4};
        adj[6] ={6}; 

        //vector <int> m= add(adj,0);

        // for(int i=0;i<7;i++){
        //     cout<<m[i]<<" ";
        // } 
        // cout<< search(timeout,timein,0,2)<<endl;
        //    }
     
    // vector<int> add(vector <int> adj[] , int v){
    //     int vis[7]={0};
    //     vector<int> mat;

       
       cout<< checkloopBFS(adj);

   //     dfs(adj,0,vis,mat,timein,timeout,cnt);
//         for(int i=0;i<7;i++){
//     cout<<mat[i]<<" ";
//    }

        //return mat;
    }
    bool checkloopBFS(vector<int> a[]){
                queue<pair<int,int>> q;
                int vis[7]={0};
                q.push({0,-1});
                vis[0]=1;
                while(!q.empty()){
                int node = q.front().first;
                int prev = q.front().second;
                q.pop();
               // cout<<"node "<<node<<endl;
                for(auto i:a[node]){
                        if (vis[i]!=1){
                            cout<<"vis "<<i<<endl;
                        vis[node]=1;
                        q.push({i,node});
                       
                            }
                        else if (prev!=i){
                            return true;
                        }
                }
                
                }
                return false;

            }
    
 
 };



int main(){
    int n=7; 
    // //cin >> n >> m;
    
    
    
    vector<int> adj[7];
    adj[0]={1,4};
    adj[1] ={2,3,0};
    adj[2] ={1};
    adj[3] = {1};
    adj[4] = {5,6,0};
    adj[5] ={4};
    adj[6] ={6}; 
    // for(int i=0;i<n;i++){
    //     int u,v;
    //     cin >> u >> v;
    //     adj[u].push_back(v);
    //     adj[v].push_back(u);
    // }

// Checkloop q;

// BFS(adj,n);
 DFS d;

// vector <int> m= d.add(adj,0);

//    for(int i=0;i<7;i++){
//     cout<<m[i]<<" ";
//    }

   
}