class Solution {
public:
    void dfs(vector<vector<int>>& image, int r, int c, int originalColor, int newColor){
        //traverse the entire image grid and change the color if it's in the original color
        
        if (r < 0 || r >= image.size() || c < 0 || c >= image[0].size()) {//check if it's out of bound
            return;
        }

        if(image[r][c] != originalColor){//check whether it's in the original color
            return;
        }
        image[r][c] = newColor;
        
        dfs(image, r, c+1, originalColor, newColor);//right
        dfs(image, r, c-1, originalColor, newColor);//left
        dfs(image, r+1, c, originalColor, newColor);//down
        dfs(image, r-1, c, originalColor, newColor);//up
    }   
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        
        int originalColor = image[sr][sc]; 

        if(originalColor != color) dfs(image, sr, sc, originalColor, color);

        return image;

    }
};