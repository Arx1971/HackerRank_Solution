#include <iostream>
#include <cstdlib>
#include <cmath>
#include <vector>

using namespace std;

const int N = 10000000;
bool sieve[N];

int main(){
	
	int tc;
	long long int prime_number;
	cin >> tc;
	
	while(tc--){
		
		bool temp = false;
		cin >> prime_number;
		
		if(prime_number == 1)
			cout << "Not Prime" << endl;
		else{
			for(int i=2; i<=sqrt(prime_number); i++){
			
			if(prime_number % i == 0){
				temp = true;
				break;
			}
		
		}
		if(temp)
			cout << "Not prime" << endl;
		else
			cout << "Prime" << endl;
		
		}
		
	
	}
	return 0;
}
