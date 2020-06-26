//program to implement bellman ford algorithm & compute the shortest paths
//from a single source vertex to all other vertices in a given weighted graph
//time coplexity : O(VE) ; [V---> Vertices & E---> Edges] of the graph

#include <iostream>
#include <vector>
#include <iomanip>
#include <climits>
using namespace std;

struct Edge
{
	int source, dest, weight;
};

void printPath(vector<int> const &parent, int v)
{
	if (v < 0)
		return;
	printPath(parent, parent[v]);
	cout << v << " ";
}

void bellmanFord(vector<Edge> const &edges, int source, int N)
{
	int E = edges.size();
	vector<int> distance(N, INT_MAX);
	distance[source] = 0;
	vector<int> parent(N, -1);
	int u, v, w, k = N;
	while (--k)
	{
		for (int j = 0; j < E; j++)
		{
			u = edges[j].source, v = edges[j].dest;
			w = edges[j].weight;
			if (distance[u] != INT_MAX && distance[u] + w < distance[v])
			{
				distance[v] = distance[u] + w;
				parent[v] = u;
			}
		}
	}
	for (int i = 0; i < E; i++)
	{
		u = edges[i].source, v = edges[i].dest;
		w = edges[i].weight;
		if (distance[u] != INT_MAX && distance[u] + w < distance[v])
		{
			cout << " Negative Weight Cycle Found !!! ";
			return;
		}
	}
	for (int i = 0; i < N; i++)
	{
		cout << " Distance of Vertex " << i << " from the Source is : "
			 << setw(2) << distance[i] << ". It's path is : [ ";
		printPath(parent, i);
		cout << "]" << '\n';
	}
}

int main()
{
	vector<Edge> edges =
		{
			{0, 1, -1}, {0, 2, 4}, {1, 2, 3}, {1, 3, 2}, {1, 4, 2}, {3, 2, 5}, {3, 1, 1}, {4, 3, -3}};
	int N = 5;
	int source = 0;
	bellmanFord(edges, source, N);
	return 0;
}