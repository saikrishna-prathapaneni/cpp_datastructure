#include <iostream>
#include <vector>


using namespace std;


class Solution {
public:
    void func(vector<vector<char>>&board, vector<vector<int>> &num, int col, int n){
        if(col==n){
            return;
        }
        for(int row=0;row<9;row++){
            if(board[col][row]=='.'){
                for(int i =0; i<9;i++){
                    if(num[col][i]==0 ){
                        char ch=i;
                        num[col][i]=1;
                        board[col][row]=ch;
                        func(board,num, col+1,n);
                        num[col][i]=0;
                        board[col][row]='.';
                    }
                }
           
            }
             else{
                    num[col][row]=1;
                }
        }

    }
    void solveSudoku(vector<vector<char>>& board) {
        
        vector<vector<char>> ans;
        vector<vector<int>> num(9, vector<int>(9,0));

        func(board,num,0,8);
        

    }
};



int main(){

    
    Solution solution;
    
     char s[10][10]={{"5","3",".",".","7",".",".",".","."}
                            ,{"6",".",".","1","9","5",".",".","."},
                            {".","9","8",".",".",".",".","6","."},
                            {"8",".",".",".","6",".",".",".","3"},
                            {"4",".",".","8",".","3",".",".","1"},
                            {"7",".",".",".","2",".",".",".","6"},
                            {".","6",".",".",".",".","2","8","."},
                            {".",".",".","4","1","9",".",".","5"},
                            {".",".",".",".","8",".",".","7","9"}
                            };
;
     solution.solveSudoku(s);
     for (int i=0; i<s.size(); i++){
        for (int j=0; j<s.size(); j++)
        cout<<s[i][j];
     }


}