#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
	int a[1000],n;
	cin >> n;
	
	for(int i=0; i<n; i++)
		cin >> a[i];
	int key;
	for(int i=n-1; i>=0; i--){
		int man = 0;
		key = a[i];
		if(key < a[i-1]){
			a[i] = a[i-1];
		}
		else
			man = 1;
		for(int l=0; l<n; l++){
			cout << a[l] << " ";
		}
		cout << endl;
		
		if(man == 1) break;
		
		a[i-1] = key;
	}
	return 0;
}
