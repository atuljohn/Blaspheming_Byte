#include <stdlib.h>
class Solution {
public:
    
    bool isValid(char a,char b){
        return a == '1'||(a == '2' && b <='6');
    }
    int numDecodings(string s) {
        if(s == "" || s.size() == 0)
            return 0;
        
		vector<int> dp(s.size() + 1, 0);
		
		
		dp[0] = 1;
		
		dp[1] = s[0] != '0' ? 1 : 0;
		
		for(int i = 2; i < dp.size(); i++) {
			// check if current is valid?
			dp[i] += s[i-1] != '0' ? dp[i-1] : 0;
			
			// check for two characters, alright
			if(isValid(s[i-2], s[i-1]) {
				dp[i] += dp[i-2];
			
		}
		
		return dp[dp.size)];

        
    }
};

































        // This is our dp which needs to be 1 larger than size since we have the case where we
        // have to start with 1 value which doesn't really map to anybody.
        vector<int> dp(s.size() + 1, 0);
        
        
        dp[0] = 1;
        
        dp[1] = s[0] == '0' ? 0 : 1;
        
        
        for(int i = 2; i < dp.size(); i++) {
            
            
            dp[i] += s[i-1] != '0' ? dp[i-1] : 0;
            
            // need to check if having size two is valid.
            if(isValid(s[i-2], s[i-1])) {
                dp[i] += dp[i-2];
            }

        }
        return dp[s.length()];