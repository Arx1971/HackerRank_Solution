#include <iostream>
#include <cmath>
#include <vector>
#include <stack>

using namespace std;

const int N = 100000005;
vector <int> graph[N];
bool visited[N];
int level[N];
int edge_id[N];
vector < int > G;
int dfs(int src,int node){
	int counter = 1;

	visited[src] = false;
	stack < int > s;
	s.push(src);
	while(!s.empty()){
		int u = s.top();
		s.pop();
		while(edge_id[u] < graph[u].size()){
			int v = graph[u][edge_id[u]];
			G.push_back(v);
			edge_id[u]++;
			if(visited[v] == true){
				counter++;
				visited[v] = false;
				s.push(u);
				s.push(v);
				break;
			}
		}
	}
	return counter;
}

int main(){
	
	freopen("input.txt","r",stdin);
	
	int node,eg;
	int n1,n2;
	cin >> node >> eg;
	for(int i=0; i<node; i++){
		visited[i] = true;
		edge_id[i] = 0;
	}
	for(int i=0; i<eg; i++){
		cin >> n1 >> n2; 
		graph[n1].push_back(n2);
		graph[n2].push_back(n1);
	}	
	int counter = 0;
	vector < int > holder;
	for(int i=0; i<node; i++){
		if(visited[i] == true){
			counter = dfs(i,node);
			holder.push_back(counter);
		}
		
	}
	
	long long int sum = 0;
	long long int temp = 0,hand = 0;
	for(int i=1; i<holder.size(); i++){
		hand += holder[i];
	}
	for(int i=0; i<holder.size()-1; i++){
		temp = (hand) * holder[i];
		hand-=holder[i+1];
		sum+=temp;
	}
	holder.clear();
	cout << sum << endl;
	return 0;
}
