#include <iostream>
#include <list>
using namespace std;
class Graph
{
public:
  int V;

  list<int> *l;

  Graph(int V)
  {
    this->V = V;
    l = new list<int>[V];
  }
  void addEdge(int x, int y)
  {
    l[x].push_back(y);
    l[y].push_back(x);
  }
  void display()
  {
    for (int i = 0; i < V; i++)
    {
      cout << i << "->";
      for (int j : l[i])
      {
        cout << j << "-";
      }
      cout << endl;
    }
  }
};
int main()
{
  Graph G(5);
  G.addEdge(0, 1);
  G.addEdge(0, 2);
  G.addEdge(2, 1);
  G.addEdge(2, 0);
  G.addEdge(1, 3);
  G.addEdge(4, 3);
  G.display();
  return 0;
}