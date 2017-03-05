#include <cstdio>
#include <cmath>
#include <cstring>
#include <cstdlib>
#include <iostream>
#include <algorithm>

using namespace std;

void Quick_Sort(int a[], int left,int right){
	
	int pivot;
	
	int i = left, j = right;
	pivot = a[(right+left)/2];
	while(i<=j){
		
		while(a[i]<pivot) i++;
		
		while(a[j]>pivot) j--;
		
		if(i<=j){
		
			swap(a[i],a[j]);
			i++;
			j--;
		
		}
	
	}
	
	if(i<right)
		Quick_Sort(a,i,right);
	
	if(j>left)
		Quick_Sort(a,left,j);
	

}

int main(){

	int n;
	
	int a[10000];
	
	cin >> n;
	
	for(int i=0; i<n; i++){
		cin >> a[i];
	}
	
	Quick_Sort(a,0,n-1);
	
	for(int i=0; i<n; i++){
		cout << a[i] << " ";
	}	
	cout << endl;
	
	return 0;
}
