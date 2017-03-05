#include <cstdio>
#include <iostream>
#include <cmath>
#include <cstring>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int main(){

	int mat[100][100];
	
	int size_of_mat;
	
	cin >> size_of_mat;
	
	int right = 0, left = 0;
	bool temp = true;
	
	for(int i=0; i<size_of_mat; i++){
		for(int j=0; j<size_of_mat; j++){
		
			cin >> mat[i][j];
			
			if(i == j) right += mat[i][j];

			
			if(i+j == size_of_mat - 1) left += mat[i][j];
		
		}
		
		
	}
	
	cout << abs(right-left) << endl;
	
	return 0;
}
