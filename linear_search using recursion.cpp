#include<iostream>
using namespace std;

int index=0;
void linear_Search(int arr[],int size,int key){
	if(size==0){
		cout<<"Key not found!!";
	}
	
	if(arr[0]==key){
		cout<<"Key"<<key<<"Found at :"<<index;
		return;
	}
	index++;
	linear_Search(arr+1,size-1,key);
	
}
int main(){
	int a[]={21,115,46,123,5};
    
	
	linear_Search(a,5,56);
	
	
	
	return 0;
}
