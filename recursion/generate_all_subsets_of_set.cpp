void helper(vector<string>& res, string& temp, string& a, int start) {
	if(start == a.size()) {
		res.emplace_back(temp);
	}
	if(start == 0)
		res.emplace_back("");
	temp
	
}

vector<string> generate_subsets(string a) {
	vector <string> result;
    string temp;
    
    generate_all_subsets_helper(result, temp, a, 0);
    
    return arr;
}