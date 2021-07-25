#include<iostream>
using namespace std;
int sum_natural_number(int n){
	if(n==0){
		return 0;
	}
	else{
		return n + sum_natural_number(n-1);
	}
	
}


int main(){
	int x=5;
	cout<<sum_natural_number(5);
	return 0;
}
