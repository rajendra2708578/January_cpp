

// this code contain only the functional code no header files or main are included in it.
class Solution {
public:
    int numSubmatrixSumTarget(vector<vector<int>>& matrix, int target) {
       int ans = 0, m = matrix.size(), n = matrix[0].size();
        
        //convert A to prefix sum of each row
        for(int i = 0; i < m; i++){
            for(int j = 1; j < n; j++){
                matrix[i][j] += matrix[i][j-1];
            }
        }
        
        for(int col_low = 0; col_low < n; col_low++){
            for(int col_high = col_low; col_high < n; col_high++){
                unordered_map<int, int> counter;
                counter[0] = 1;
                int cur = 0;
                for(int row = 0; row < m; row++){
                    cur += matrix[row][col_high] - ((col_low > 0) ? matrix[row][col_low-1] : 0);
                    ans += counter[cur - target];
                    // cout << row << ", [" << col_low << ", " << col_high << " ]" << ", cur: " << cur << ", ans: " << ans << endl;
                    counter[cur]++;
                }
            }
        }
        
        return ans;
    }
};