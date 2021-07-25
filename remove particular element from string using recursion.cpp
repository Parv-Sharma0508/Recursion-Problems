#include<iostream>
using namespace std;
void removeX(char c[]){
	if(c[0]=='\0'){
		return ;
	}
	if(c[0]!='x'){
		removeX(c+1);
	}else{
		int i=1;
		for(;c[i]!='\0';i++){
			c[i-1]=c[i];
		}
		c[i-1]=c[i];
		removeX(c);
	}
	
}
int length(char c[]){
	if(c[0] == '\0'){
		return 0;
	}
	return 1+length(c+1);
	
}
int main(){
	
	char s[]="xxfgxaxjj\0";
	cout<<length(s)<<endl;
	removeX(s);
	cout<<s<<endl;
	cout<<length(s)<<endl;;
	
	 return 0;
}
