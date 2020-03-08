
bool is_palindrome(string &s, int left, int right) {
    while(left < right) {
        if(s[left++] != s[right--])
            return false;
    }
    // this is for the case where left and right are equal ie starting of the for loop.
    return true;
}
void palindrome_helper(vector <string> &arr, string &s, int pos, string cur_decomposition) {
    if(pos == s.size()) {
        arr.push_back(cur_decomposition);
        return;
    }
    for(int i = pos;i < s.size();i++) {
        if(is_palindrome(s, pos, i)) {
            if(pos == 0)
                palindrome_helper(arr, s, i+1, s.substr(pos, i-pos+1));
            else
                palindrome_helper(arr, s, i+1, cur_decomposition + '|' + s.substr(pos, i-pos+1));
        }
    }
}
vector <string> generate_palindromic_partitions(string s) {
    vector <string> arr;
    palindrome_helper(arr, s, 0, "");
    return arr;
}

