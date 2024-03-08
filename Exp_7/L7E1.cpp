/*Write a C++ program to Represent the following graphs using an adjacency
matrix*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
  int adj[100][100];
  int nodes, edge, u, v;
  cout << "Enter the number of Nodes: ";
  cin >> nodes;
  cout << "Enter the number of Edges: ";
  cin >> edge;

  cout << "Enter the edge connections: " << endl;
  for (int i = 0; i < edge; i++)
  {
    cin >> u >> v;
    adj[u][v] = 1;
    adj[v][u] = 1;
  }
  cout << "Adjacency matrix for graph (b):\n";
  for (int i = 0; i < nodes; i++)
  {
    for (int j = 0; j < nodes; j++)
    {
      cout << adj[i][j] << " ";
    }
    cout << endl;
  }

  cout << endl;
}
