class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int i=matrix.size();
        int j=matrix[0].size();

        int low = 0;
        int high=i*j-1;

        while(low<=high){
            int mid=low+(high-low)/2;
            int row=mid/j;
            int col=mid%j;

            if (matrix[row][col] == target){
                return true;
            }else if(matrix[row][col] < target){
                low=mid +1;
            }else{
                high=mid-1;
            }
        }
        return false;

        
    }
};
