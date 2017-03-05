#include <cstdio>
#include <iostream>

using namespace std;

int main(){

	int a[1000000],n;
	
	cin >> n;
	
	for(int i=0; i<n; i++){
		cin >> a[i];
	}
	int hand = 0;
	for(int i=0; i<n-1; i++){
		for(int j=0; j<n-1; j++){
		
			if(a[j]>a[j+1]){
				swap(a[j],a[j+1]);
				hand++;
			}
		}
	}
	cout << "Array is sorted in " << hand << " swaps." << endl;
	cout << "First Element: " << a[0] << endl;
	cout << "Last Element: " << a[n-1] << endl;

}
