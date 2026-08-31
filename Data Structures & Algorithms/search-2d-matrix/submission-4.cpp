class Solution {
public:
    int findrow(vector<vector<int>>& matrix, int target){
        int row = 0;
        while(row < matrix.size()){
            if(matrix[row][0] <= target&& matrix[row][matrix[0].size() - 1] >= target){
                return row;
            }
            row++;
        }
        
        return -1;
    }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if(matrix.empty()) return false;
        int m =matrix.size();
        if(m == 0) return false;
        int n = matrix[0].size();
        int row = findrow(matrix, target);
        if(row == -1) return false;
        int l = 0;
        int r = n - 1;
        while(l <= r && l <= m && r >= 0){
            int m = l + (r - l) / 2;
            if(matrix[row][m] == target) return true;
            else if(matrix[row][m] < target){
                l = m + 1;
            }   
            else{
                r = m - 1;
            }         
        }
        return false;
    }
};
