class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size() ;
        for (int l = 0; l < n; l++) {
            for (int r = l + 1; r < n; r++) {
                if (nums[l] + nums[r] == target) {
                    return { l , r } ;
                }
            }
        }
        return {-1 , -1 } ;
    }
};