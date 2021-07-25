#include<iostream>
using namespace std;
int  first_occurence(int *arr,int size,int key,int i){
	
	if(i==size){
		return -1;
	}
	if(arr[i]==key){
	   return i;		
}
       first_occurence(arr,6,10,++i);
}



int main(){
	int arr[6]={12,13,12,11,12,10};
	cout<<first_occurence(arr,6,10,0)<<endl;
	return 0;
}
