class Solution {
private:
    int ans = INT_MIN;
    bool allUnique(string s, int start, int end) {
        set <char> unique_chars;
        for(int i = start; i < end; i++) {
            if(unique_chars.find(s[i]) == unique_chars.end()) {
                unique_chars.insert(s[i]);
            } else
                return false;
        }
        return true;
    }
public:
    int lengthOfLongestSubstring(string s) {
        int size = s.size();
        if(size ==  0)
            return 0;
        for(int i = 0; i < size; i++) {
            for(int j = i+1; j <= size;j++) {
                if(allUnique(s, i, j)) {
                    ans = max(ans, j - i);
                }
            }
        }
        return ans;
    }
};