#include<iostream>
using namespace std;
int length(char c[]){
	if(c[0] == '\0'){
		return 0;
	}
	return 1+length(c+1);
	
}
int main(){
	
	char c[]="sdfgajj\0";
	cout<<length(c);
	 return 0;
}
