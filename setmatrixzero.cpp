class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        
        int col0=1;
        int rows = matrix.size();  //calc the no of rows
        int cols = matrix[0].size(); //calc the no of columns
      
        for(int i=0; i<rows; i++) //linearly traverse the matrix
        {
            if(matrix[i][0] == 0) col0 = 0; //check if the value at any of the 0th col of any of the given row is 0 then set 
                                                  //col0 as false or 0
            for(int j=1;j<cols;j++) //traverse for the rest of the col which starts from 1
                if(matrix[i][j] == 0)
                    matrix[i][0] = matrix[0][j] = 0; //if it is 0 set the leftmost and topmost position to 0
        }
        
        for( int i=rows-1;i>=0;i--){               //traverse from backwards
            for(int j=cols-1;j>=1;j--)
                if(matrix[i][0] == 0 || matrix[0][j] == 0)
                    matrix[i][j] = 0;
            if(col0 == 0) matrix[i][0] = 0;  //if col is false set 0th col as 0
        }
        
    }
};