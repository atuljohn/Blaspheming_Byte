class NumMatrix {
public:
    vector<vector<int>> dp;
    //int row, col;
    NumMatrix(vector<vector<int>>& matrix) {
        if(matrix.size() == 0 || matrix[0].size() == 0)
            return;
        
		dp = vector<vector<int>> (matrix.size() + 1, vector<int> (matrix[0].size() + 1, 0));
		

        for(int r = 0; r < matrix.size(); r++) {
            for(int c = 0; c < matrix[0].size(); c++) {
                // everything in the row before
                dp[r + 1][c + 1] = matrix[r][c] + dp[r][c + 1] + dp[r + 1][c] - dp[r][c];
            }
        }

    }

    int sumRegion(int row1, int col1, int row2, int col2) {
        return dp[row2 + 1][col2 + 1] - dp[row1][col2 + 1] - dp[row2 + 1][col1] + dp[row1][col1] ;
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */
 
 
 
 
 
 
 
 
 
 
 
 
 dp = vector<vector<int>> (matrix.size() + 1, vector<int>(matrix[0].size() + 1, 0));
 dp[r + 1][c + 1] = dp[r][c + 1] + dp[r + 1][c] - dp[r][c] + matrix[r][c];
 return dp[row2 + 1][col2 + 1] - dp[row1][col2 + 1] - dp[row2 + 1][col1] + dp[row1][col1];