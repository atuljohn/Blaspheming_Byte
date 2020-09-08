class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        // quit for loop if we reach 0. since there are no negative numbers to 
        // add up to.
        for(int i = 0; i < nums.size() && nums[i] <= 0; i++) {
            // this extra condition is probably for the case where it's the same number.
            // because we do not want duplicate triplets.
            if(i == 0 || nums[i-1] != nums[i]) {
                twoSumII(nums, i, ans);
            }
        }
        return ans;
    }
    void twoSumII(vector<int>& nums, int i, vector<vector<int>> &res) {
        int start = i +1;
        int end = nums.size()-1;
        while(start < end) {
            int sum = nums[i] + nums[start] + nums[end];
            if(sum < 0 )//|| ( start > i+1 && nums[start] == nums[start-1]) )
                start++;
            else if( sum > 0 || (end < nums.size()-1 && nums[end] == nums[end+1] ))
                end--;
            else
                res.push_back( {nums[i], nums[start++], nums[end--]}); // the ++ and -- are done because we want to keep going forward and see if there are any other available values.
        }
    }
};