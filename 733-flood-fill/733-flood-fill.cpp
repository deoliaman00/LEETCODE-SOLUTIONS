class Solution {
public:
    void flood(vector<vector<int>>& image, int sr, int sc, int newColor,int source)
    {
        int n=image.size();
        int m=image[0].size();
        
        if(sr<0 || sr>=n || sc<0 || sc>=m || image[sr][sc]!=source || image[sr][sc] == newColor)
            return;
        
        image[sr][sc]=newColor;
        flood(image,sr,sc-1,newColor,source);
        flood(image,sr-1,sc,newColor,source);
        flood(image,sr+1,sc,newColor,source);
        flood(image,sr,sc+1,newColor,source);
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor)
    {
        int n=image.size();
        
       // vector<vector<int>>af(n);
        int source=image[sr][sc];
        flood(image,sr,sc,newColor,source);
        
        return image;
        
    }
};