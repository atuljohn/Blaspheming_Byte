class Solution {
public:
    
    unordered_map<string, string> phone = {
        {"2", "abc"},
        {"3", "def"},
        {"4", "ghi"},
        {"5", "jkl"},
        {"6", "mno"},
        {"7", "pqrs"},
        {"8", "tuv"},
        {"9", "wxyz"}
    };
    
    vector<string> output;
    
    
    void helper(string sofar, string digits) {
		if(digits.size() == 0) {
			output.push_back(sofar);
		}
		
		string letters = phone[digits.substr(0, 1)]; // 234
		
		for( int i = 0; i < letters.size(); i++ ) {
			
			string letter = letters.substr(i, 1);
			
			helper(sofar + letter, digits.substr(1)); // 34
			
			
		} // Time complexity O(3 ^ M * 4 ^ N); 
		

        
    }
        
    vector<string> letterCombinations(string digits) {
        if(digits.size() != 0) 
            helper("", digits);
        return output;
    }
};