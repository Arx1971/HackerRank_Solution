#include <cstdio>
#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>

using namespace std;

int N = 10000000;

int sieve [10000000];

int main(){

	for(int i=0; i<N; i++){
		
		sieve[i] = 1;
	}
	for(int i=2; i<N; i++){
		for(int j=2*i; j<N; j+=i){
			sieve[j] = 0;
		}
	}
	
	vector < int > primenumber;
	
	for(int i=2; i<N; i++){
		if(sieve[i] == 1)
			primenumber.push_back(i);
	}
	

	int tc;
	
	cin >> tc;
	
	int n;
	
	while(tc--){
	
		cin >> n;
		
		cout << primenumber[n-1] << endl;
	
	}

	return 0;
}
