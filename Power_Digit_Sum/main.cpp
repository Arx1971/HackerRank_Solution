#include <cstdio>
#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

int main(){
	
	int tc,n;
	
	cin >> tc;
	
	while(tc--){
		
		cin >> n;
		
		long long int number = pow(2,n);
		long long int hand = 0;
		
		while(number!=0){
		
			int temp = number%10;
			number = number/10;
			hand += temp;
		
		}
		cout << hand << endl;
		
	}
	return 0;

}
