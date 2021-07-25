#include<iostream>
using namespace std;
void removedup(char c[]){
	if(c[0]=='\0'){
		return ;
	}
	if(c[0]!=c[1]){
		removedup(c+1);
	}else{
		int i=1;
		for(;c[i]!='\0';i++){
			c[i-1]=c[i];
		}
		c[i-1]=c[i];
		removedup(c);
	}
	
}
int main(){
	char s[]="aabbbcdda\0";
	removedup(s);
	cout<<s<<endl;
	 return 0;
}
