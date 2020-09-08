class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector <int> ans;
        map <int, int> mymap;
        for(int i = 0; i < nums.size(); i++) {
            mymap[nums[i]] = i;
        }
        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];
            if(mymap.find(complement) != mymap.end()
                        && mymap[complement] != i ) {
                ans.push_back(i);
                ans.push_back(mymap[complement]);
                return ans;
            }
        }
        return ans;
    }
};