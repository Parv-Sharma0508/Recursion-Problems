#include<iostream>
using namespace std;

void print_count(int n){
	if(n<0){
		return;
	}
	cout<<n<<endl;
	print_count(n-1);
	
	
}

int main(){
	
	print_count(5);
	
	
	return 0;
}
