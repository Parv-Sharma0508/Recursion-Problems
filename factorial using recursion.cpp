#include <iostream>
using namespace std;

int factorial(int n){
	if(n==0){
		return 1;
	}
	int output=factorial(n-1);
	return n* output;
}




int main(){
	
	cout<<factorial(4);
	return 0;
}
