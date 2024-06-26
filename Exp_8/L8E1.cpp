/*Write C++ programs for the following graphs to Find the shortest distance from an arbitrary source to all the nodes.*/

#include <bits/stdc++.h>
using namespace std;

vector<int> adj[100];
int dis[100];
int visited[100];

void Bfs(int source)
{
    queue<int> q;
    dis[source] = 0;
    visited[source] = 1;
    q.push(source);
    while (!q.empty())
    {
        int node = q.front();
        for (auto it : adj[node])
        {
            int nxt_node = it;

            if (visited[nxt_node])
                continue;
            dis[nxt_node] = 1 + dis[node];
            visited[nxt_node] = 1;
            q.push(nxt_node);
        }
        q.pop();
    }
}
int main()
{
    int i, j, k;
    int n, e;
    cout << "For Graph b: " << endl;
    vector<int> bfs;
    cout << "No. of Nodes: ";
    cin >> n;
    cout << "No. of Edges: ";
    cin >> e;
    cout << "Enter the edge connections: " << endl;
    for (i = 0; i < e; ++i)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    int source;
    cout << "Enter the source node: " << endl;
    cin >> source;
    Bfs(source);
    for (i = 0; i < n; ++i)
    {
        cout << "Distance " << source << " to " << i << " = " << dis[i] << endl;
    }
}

   
