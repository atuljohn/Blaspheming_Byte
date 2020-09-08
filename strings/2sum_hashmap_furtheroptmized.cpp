class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector <int> ans;
        map <int, int> mymap;
        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];
            if(mymap.find(complement) != mymap.end()) {
                ans.push_back(mymap[complement]);
                ans.push_back(i);
                return ans;
            }
            mymap[nums[i]] = i;
        }
        return ans;
    }
};