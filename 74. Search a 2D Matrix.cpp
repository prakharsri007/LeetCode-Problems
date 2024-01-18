class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        for(int i=0;i<matrix.size();i++){
            if(matrix[i][0]<=target && target<=matrix[i][matrix[i].size()-1]){//this checks in which row of the matrix the target shoudl exist
                for(int j=0;j<matrix[i].size();j++){
                    if(target==matrix[i][j])
                    return true;
                }
            }
        }
        return false;
    }
};