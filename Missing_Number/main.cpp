#include <iostream>
#include <cstdlib>
#include <cstring>
#include <cstdio>
#include <vector>

using namespace std;

int main(){

	int n,m;
	
	vector < int > a,b,a1,b1;
	
	
	for(int i=0; i<100000; i++){
		a1.push_back(0);
		b1.push_back(0);
	}
	
	
	cin >> n;
	int temp;
	for(int i=0; i<n; i++){
		cin >> temp;
		a.push_back(temp);
		a1[a[i]]++;
	}
	
	cin >> m;
	for(int i=0; i<m; i++){
		cin >> temp;
		b.push_back(temp);
		b1[b[i]]++;
	}
	for(int i=0; i<b1.size(); i++){
		if(b1[i]!=0){
			
			if(b1[i] > a1[i])
				cout << i << " " ;
		}
	}
	cout << endl;
}
