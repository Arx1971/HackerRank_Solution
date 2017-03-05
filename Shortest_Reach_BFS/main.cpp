#include <iostream>
#include <cmath>
#include <cstring>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <queue>

using namespace std;
const int N = 1005;
vector < int > graph[N];
int level[N];
bool visited[N];
int parent[N];
int node;

void bfs(int src){
	
	int u,v;
	
	for(int i=0; i<N; i++)
		visited[i] = false;
		
	for(int i=1; i<node; i++)
		level[i] = 0;
		
	queue < int > q;
	q.push(src);
	visited[src] = true;
	level[src] = 0;
	
	while(!q.empty()){
		
		u = q.front();
		q.pop();
		
		for(int j=0; j<graph[u].size(); j++){
			
			v = graph[u][j];
			
			if(visited[v] == false){
			
				visited[v] = true;
				level[v] = level[u] + 6;
				parent[v] = u;
				q.push(v);
				
			}
		
		}
	
	}
	
}
int main(){
	
	freopen("input2.txt", "r", stdin);
	freopen("out.txt", "w",stdout);
	int test_case,edge;
	
	cin >> test_case;
	
	int n1,n2,src;
	int k = 0; ///Error Tracker:
	
	while(test_case--){
		
		cin >> node >> edge;
		
		for(int i=0; i<edge; i++){
			cin >> n1 >> n2;
			
			graph[n1].push_back(n2);
			graph[n2].push_back(n1);
		}
		cin >> src;
		bfs(src);
		
		for(int i=1; i<=node; i++){
			
			if(i!=src){
			
				if(level[i]==0)
					cout << "-1 ";
				else
					cout << level[i] << " ";
			}
		}
		
		for(int i=0; i<=node+1; i++){
			graph[i].clear();
		}
		//printPath(src,node);
		cout << endl;
			
	}
	return 0;
}
