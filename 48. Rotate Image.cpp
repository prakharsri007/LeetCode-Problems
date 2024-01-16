class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n=matrix.size();

        //first we do the transpose of the given matrix by swappping the elements around the diagonal
        for(int i=0;i<n;i++){
            for(int j=i+1;j<matrix[i].size();j++){
                //we use j as i+1 because sirf ek half swap karna hai agar pure matrix ke elements swap
                //karenge toh 2 times swap hoke phir original jaisa ho jayega
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        //now reverse all the rows of the transpose to get the final rotated matrix
        for(int i=0;i<n;i++){
            reverse(matrix[i].begin(),matrix[i].end());
        }

    }
};