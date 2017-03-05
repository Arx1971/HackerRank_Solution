#include <cstdio>
#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

struct Player{
	
	string name;
	int score;

};

int main(){

	int test_case;
	
	Player a[1000];
	cin >> test_case;
	for(int i=0; i<test_case; i++){
		
		cin >> a[i].name >> a[i].score;
	
	}
	
	for(int i=0; i<test_case-1; i++){
		for(int j=0; j<test_case-1; j++){
			
			if(a[j].score<a[j+1].score){
				Player men = a[j];
				a[j] = a[j+1];
				a[j+1] = men;
			
			}
			if(a[j].score == a[j+1].score){
				
				if(a[j].name > a[j+1].name){
					Player men = a[j];
					a[j] = a[j+1];
					a[j+1] = men;
				}
			
			}
			
		}
	}
	
	for(int i=0; i<test_case; i++){
	
		cout << a[i].name << " " << a[i].score << endl;
	
	}
	

}
