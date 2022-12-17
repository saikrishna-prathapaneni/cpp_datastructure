#include <iostream>
#include <vector>


using namespace std;



void back_track(vector<vector<int>>&a,vector<vector<int>> &b,vector<vector<int>> &vis, int i, int j){
    cout<<i<<" "<<j<<endl;
    for(int k=0;k<4;k++){
            for (int l=0;l<4;l++){
                cout<<" "<< b[k][l];
            }
            cout<<endl;
        }
    
    if(vis[i][j]==1){
        return;
    }
    else{
        vis[i][j]=1;
    }

    if((i>=4) || (j>=4) || (i<0) || (j<0)){
            return; 
    }
         
    if(a[i][j]==1){
        b[i][j]=1;
        if (i==3 && j==3){
            
           return;  
        }
        
        
         back_track(a,b,vis,i+1,j);
         back_track(a,b,vis,i,j+1);
        //  back_track(a,b,vis,i-1,j);
        
        // back_track(a,b,vis,i,j-1);
    }
    
       // b[i][j]=0;
        return;
    
        
       
}


int main(){
    vector<vector<int>> out ={{0,0,0,0},{0,0,0,0},{0,0,0,0},{0,0,0,0}};
    vector<vector<int>> a={{1,0,0,0},
                            {1,1,1,1},
                            {0,1,0,0},
                            {1,1,1,1}};
    vector<vector<int>> vis ={{0,0,0,0},{0,0,0,0},{0,0,0,0},{0,0,0,0}};
    back_track(a,out,vis,0,0);
     cout<<endl;
    for(int k=0;k<4;k++){
            for (int l=0;l<4;l++){
                cout<<" "<< out[k][l];
            }
            cout<<endl;
        }
}
