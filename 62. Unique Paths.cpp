class Solution {
public:
    int uniquePaths(int m, int n) {
        vector<vector<int>> dpHashTable(m, vector<int>(n, -1));
        return recursion(0, 0, m, n,dpHashTable);
    }

private:
    int recursion(int i, int j, int m, int n, vector<vector<int>> & dpHashTable) {
        if (i == m - 1 && j == n - 1) {
            return 1; // reached the end - count one path
        }
        if (i >= m || j >= n) {
            return 0; // out of bounds bc
        }
        if(dpHashTable[i][j]!=-1) {//hashtable stores the value of paths so that we dont have to calculate same path again
            return dpHashTable[i][j];
        }
        else {
            return dpHashTable[i][j] = recursion(i + 1, j, m, n,dpHashTable) + recursion(i, j + 1, m, n,dpHashTable); // Explore both down and right paths recursively
        }
    }
};
