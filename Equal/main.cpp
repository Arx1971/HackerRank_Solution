#include <cstdio>
#include <iostream>
#include <cmath>
#include <vector>
#include <cstdlib>
#include <algorithm>

using namespace std;

void quick_sort(int a[],int i,int j){
	
	int right = j,left = i,pivot = a[(right+left)/2];
	while(i<=j){
		while(a[i]<pivot) i++;
		while(a[j]>pivot) j--;
		
		if(i<=j) swap(a[i++],a[j--]);
		
	}
	if(i>left) quick_sort(a,i,right);
	if(j<right) quick_sort(a,left,j);
}

int main(){
	
	int n,arr[1001];
	cin >> n; 
	for(int i=0; i<n; i++) cin >> arr[i];
	
	quick_sort(arr,0,n-1);
	int man = 0;
	for(int i=0; i<n; i++)
		if(a[i]<a[i+1]) man++;
	
	cout << man << endl;

}
