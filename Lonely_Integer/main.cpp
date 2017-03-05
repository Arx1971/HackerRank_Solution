#include <cstdio>
#include <cstring>
#include <cmath>
#include <iostream>
#include <vector>
#include <cstdlib>

using namespace std;

int main(){

	int n;
	
	vector < int > a,b;
	
	for(int i=0; i<1000; i++){
		
		b.push_back(0);
	
	}
	
	cin >> n;
	
	int temp;
	
	for(int i=0; i<n; i++){
		
		cin >> temp;
		
		a.push_back(temp);
		
		b[a[i]]++;
	
	}
	
	for(int i=0; i<b.size(); i++){
		
		if(b[i]==1)
			cout << i;
	}
	
	cout << endl;
}
