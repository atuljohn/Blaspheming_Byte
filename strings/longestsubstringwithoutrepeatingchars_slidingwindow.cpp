class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int size = s.length();
        
        set<char> set;
        int ans = 0, i = 0, j = 0;
        while(i < size && j < size) {
            if(set.find(s[j]) == set.end()) {
                set.insert(s[j++]);
                ans = max(ans, j -i);
            } else {
                set.erase(s[i++]);
            }
        }
        return ans;
    }
};