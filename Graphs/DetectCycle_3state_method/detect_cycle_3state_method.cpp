bool dfs(vector<int> &visited, vector<vector<int>> &graph, int i) {
    for(int j = 0; j < graph[i].size(); j++) {
        if(visited[graph[i][j]] == -1)
            return true;
        if(visited[graph[i][j]] == 0) {
            visited[graph[i][j]] = -1;
            if(dfs(visited, graph, graph[i][j])) return true;
            visited[graph[i][j]] = 1;
        }
    }
    return false;
}
bool hasCycle(int N, int M, vector<vector<int>> edges) {
	// Write your code here
	vector <vector<int>> graph(N, vector<int>());
	vector <int> visited(N, 0);
	
	// Create the adjacency matrix
	for(int i = 0; i < edges.size(); i++) {
	    graph[edges[i][0]].push_back(edges[i][1]);
	}
	for(int i = 0; i < N; i++) {
	    if(visited[i] == 0) {
	        visited[i] = -1;
	        if(dfs(visited, graph, i)) return true;
	        visited[i] = 1;
	    }
	    
	}
	return false;
}