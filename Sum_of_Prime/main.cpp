#include <iostream>
#include <vector>
#include <cstdio>
using namespace std;

const int N = 1000000;

bool sieve[N];

int main(){

	for(int i=0; i<N; i++)
		sieve[i] = true;
		
	for(int i=2; i<N; i++){
		for(int j=2*i; j<N; j+=i)
			sieve[j] = false;
	}
	long long int part = 0;
	vector < long long int > sumholder;
	sumholder.push_back(0);
	sumholder.push_back(0);
	for(int i=2; i<N; i++){
		
		if(sieve[i]==true){
			part = part + i;
			sumholder.push_back(part);
		}
		else
			sumholder.push_back(part);

	}
	int tc,a;
	
	scanf("%d",&tc);
	
	while(tc--){
	
		cin >> a;
		
		cout << sumholder[a] << endl;
	
	}
	return 0;
}
