#include<iostream>
using namespace std;
int last_occurence(int *arr,int size,int key,int i){
	
	if(i==-1){
		return -1;
	}
	if(arr[i]==key){
	   return i;		
}
       last_occurence(arr,6,10,--i);
}



int main(){
	int arr[7]={12,13,12,11,12,10,56};
	cout<<last_occurence(arr,7,12,6)<<endl;
	return 0;
}
