class Solution {
public:
    void fill(vector<vector<int>>& image,vector<vector<int>> sub, int sr, int sc, int color,int prev){
        cout<<sr<<sc<<endl;
        if(sr>=image.size() or sc >= image[0].size() or sr < 0 or sc<0 or image[sr][sc] == color or image[sr][sc]!=prev){
i<0 || i>=image.size() || j<0 || j>= image[0].size() || image[i][j] == newColor || image[i][j] != val
            return;
        }
       
        image[sr][sc]=color;
        for(auto i:sub){
            
            
                fill(image,sub,sr+i[0],sc+i[1],color,sr);
            
        }
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        //vector<vector<int>> vis(image.size(),vector<int>(image[0].size(), 0));
     
        vector<vector<int>> sub={{-1,0},
        {1,0},
        {0,1},{0,-1}};
        fill(image,sub,sr,sc,color,image[sr][sc]);
        return image;
    }
};