#include <iostream>
#include <vector>


using namespace std;



void back_track(vector<vector<int>>a,vector<vector<int>> &b, int i, int j){
    if((i>=4) || (j>=4)){
            return; 
    }
         
    if(a[i][j]==1){
        b[i][j]=1;
        if (i==3 || j==3)
        return;      
        back_track(a,b,i,j+1);
    }
        b[i][j]=0;
       back_track(a,b,i+1,j);
    
    
}


int main(){
    vector<vector<int>> out ={{0,0,0,0},{0,0,0,0},{0,0,0,0},{0,0,0,0}};
    vector<vector<int>> a={{1,0,0,0},{1,1,1,1},{0,1,0,0},{1,1,1,1}};
    back_track(a,out,0,0);
     cout<<endl;
    for(int k=0;k<4;k++){
            for (int l=0;l<4;l++){
                cout<<" "<< out[k][l];
            }
            cout<<endl;
        }
}
