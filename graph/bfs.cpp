#include <iostream>
#include <vector>
#include <queue>
#include <cstring>

using namespace std;

// Parameters: (Graph, Source vertex, Destination vertex)
void addDirectedEdge(vector<int> graph[], int u, int v) {
	graph[u].push_back(v);
}

// Parameters: (Graph, Vertex 1, Vertex 2)
void addUndirectedEdge(vector<int> graph[], int u, int v) {
	graph[u].push_back(v);
	graph[v].push_back(u);
}

// ************************ BREADTH FIRST SEARCH (BFS) ************************

// Parameters: (Graph, Number of vertices, Source vertex)
void bfs(vector<int> graph[], int V, int src) {
	bool visited[V];
	memset(visited, 0, sizeof(visited));
	queue<int> queue;

	visited[src] = true;
	queue.push(src);

	cout << "BFS traversal of given graph: ";
	while(!queue.empty()) {
		src = queue.front();
		cout << src << " ";
		queue.pop();
		for(auto i = graph[src].begin(); i != graph[src].end(); ++i) {
			if(!visited[*i]) {
				visited[*i] = true;
				queue.push(*i);
			}
		}
	}
}

// ***********************************************************************

int main() {
	int V = 4;
	vector<int> graph[V];

	// Adding directed edges to graph
	addDirectedEdge(graph, 0, 1);
	addDirectedEdge(graph, 1, 2);
	addDirectedEdge(graph, 2, 3);
	addDirectedEdge(graph, 3, 3);

 	// Adding undirected edge to graph
	addUndirectedEdge(graph, 0, 2);

	int src = 2;	// Source vertex for bfs call
	bfs(graph, V, src);
	
	return 0;
}