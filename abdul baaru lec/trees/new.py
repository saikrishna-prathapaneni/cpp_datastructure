class Solution:
    def moves(self,data):
        move_=[]
        self.n = len(data[0])
        for i in range(len(data)):
        
            for move in range(len(data[i])):
               if data[i][move]=="X":
                    move_.append([i, move]) 
               elif data[i][move]=="O":
                    move_.append([i,move])
      
               
        print(self.tictactoe(move_))
    #[[0,0],[2,0],[1,1],[2,1],[2,2]]  
    def tictactoe(self, moves) -> str:
        N = 3
        rows, cols = [0] * N, [0] * N
        mainDiag = antiDiag = 0

        player = 1
        for r, c in moves:
            rows[r] += player
            cols[c] += player
            if r == c: mainDiag += player
            if r + c == N - 1: antiDiag += player
            if abs(rows[r]) == N or abs(cols[c]) == N or abs(mainDiag) == N or abs(antiDiag) == N:
                return "X wins" if player == 1 else "O wins"
            player = -player

        return "Tie" if len(moves) == N * N else "Ongoing"
    
if __name__ == '__main__':
    s= Solution()
    s.moves(["OOX",
             "OXO",
             "XOX"])
  
    
