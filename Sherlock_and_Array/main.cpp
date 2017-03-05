#include <cstdio>
#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

int main(){

	//cout << "Test Fine" << endl;
	
	
	int test_case;
	
	int number,sum_1 = 0,sum_2 = 0,arr[1000000];
	
	bool temp,hand;
	
	int n;
	
	cin >> test_case;
	
	while(test_case--){
	
		cin >> n;
	
		for(int i=0; i<n; i++)
			cin >> arr[i];
			
		sum_1 = 0;	
		
		for(int i=0,j=n-1; i<j; i++){
		
			sum_1 += a[i];
			
			if(sum_1 == a[j])
				cout << "YES" << endl;
				
			else
		
		}
	
	}
	
	return 0;
}
