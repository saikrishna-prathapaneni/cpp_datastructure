#include <iostream>
#include <vector>


using namespace std;


class Solution {
public:
    
    bool check(int j, int i, vector<string> board){
            int jn =j, in=i;
            while (jn>=0 && in >=0){
                
                
                if(board[jn][in]=='Q'){
                    return false;
                }
                jn--;
                in--;
            }
            jn=j;in=i;
            while (in>=0){
                
                
                if(board[j][in]=='Q'){
                    return false;
                }
                in--;
            }
           
            jn=j;in=i;
         
            while(jn<board.size() && in>=0){
                
                if (board[jn][in]=='Q')
                return false;
                jn++; in--;
            }
return true;
    }

    void solution(vector<vector<string>> &ans, vector<string> &board, int col){
       
        if (col==board.size())
        {
            ans.push_back(board);
            return;
        }
        for(int j=0;j<board.size();j++){
            
               
                if (check(j,col, board)){
                board[j][col]='Q';
                solution(ans,board, col+1);
                board[j][col]='.';

            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        
        vector<string> board(n);
        vector<vector<string>> ans;
        string s;
      
        for(int i=0;i<n;i++) s.push_back('.');
        for(int i=0;i<n;i++) board[i]= s;



        solution(ans,board,0);
        return ans;
    }
};

int main(){

    
    Solution solution;
    
     vector<vector<string>> s;
     s= solution.solveNQueens(4);
     for (int i=0; i<s.size(); i++){
        for (int j=0; j<s.size(); j++)
        cout<<s[i][j];
     }


}