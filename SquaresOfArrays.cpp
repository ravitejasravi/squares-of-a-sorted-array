class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        vector<int> res(n);
        int i = 0, j = n - 1;
        
        int iSquared, jSquared, iter = n - 1;
        while (i <= j) {
            iSquared = nums[i] * nums[i];
            jSquared = nums[j] * nums[j];
            if (iSquared >= jSquared) {
                res[iter--] = iSquared;
                ++i;
            } else {
                res[iter--] = jSquared;
                --j;
            }
        }
        return res;
    }
};