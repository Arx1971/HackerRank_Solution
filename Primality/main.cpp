#include <iostream>
#include <cstdlib>
#include <cmath>
#include <vector>

using namespace std;

const int N = 1000000009;
bool sieve[N];

int main(){
	freopen("input.txt","r",stdin);
	
	for(int i=0; i<N; i++)	
		sieve[i] = true;
	
	sieve[1] = false;
	
	for(int i=2; i<N; i++){
		for(int j=2*i; j<N; j+=i)
			sieve[j] = false;
	}
	
	int tc,a;
	
	cin >> tc;
	
	while(tc--){
	
		cin >> a;
		
		if(sieve[a]==true)
			cout << "Prime" << endl;
		
		else
			cout << "Not prime" << endl;
	}
	
	cout << endl;

}
