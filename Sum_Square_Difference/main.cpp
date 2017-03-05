#include <cstdio>
#include <iostream>
#include <cmath>
#include <vector>
#include <cstdlib>

using namespace std;

int main(){

	int tc,n;
	
	vector < int > myvect;
	
	cin >> tc;
	
	while(tc--){
	
		cin >> n;
		
		long long int sum = 0;
		long long int hand = 0;
		for(int i=1; i<=n; i++){
			
			sum+=i;
			hand = hand +(i*i);
		}
		sum = pow(sum,2);
		
		cout << abs(sum - hand) << endl;
		
		
	}
	return 0;
}
