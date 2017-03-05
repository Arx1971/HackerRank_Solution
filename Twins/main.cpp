#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <vector>

using namespace std;

int sieve[10000000];
int N = 10000000;


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
	
	int low,high;
	
	cin >> low >> high;
	
	int i = sieve[low];
	
	int hand = 0;
	
	while(primenumber[i]<=high){
		
		//cout << primenumber[i] << endl;
		
		if((primenumber[i+1]-primenumber[i] )== 2){
			
			hand++;
		}
	
		i++;
	
	}
	
	cout << primenumber[primenumber.size()-1] << endl;	

}
