#include <cstdio>
#include <vector>
#include <algorithm>
#include <cmath>
#include <iostream>

using namespace std;

int main(){
	
	int a[1000000],temp[1000000];
	
	int n,rot;
	
	cin >> n >> rot;
	
	for(int i=0; i<n; i++){
		
		cin >> a[i];
	
	}
	
	for(int i=0,j=0; i<n; i++){
	
		if(rot>i)
			temp[i] = 0;
			
		else
			temp[i] = a[j++];
	}
	
	for(int i=mod-1,j=n-1; i>=0; i--){
		
		temp[i] = a[j--];
	
	}
	
	for(int i=0; i<n; i++)
		cout << temp[i] << " " ;
	
}
