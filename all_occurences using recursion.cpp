#include<iostream>
using namespace std;
int count;
void  all_occurence(int *arr,int size,int key,int i){
	
	if(i==size && count!=0){
		return;
	}
	else if(i==size && count==0){
		cout<<"Not Found!!!";
	}
	
	
	if(arr[i]==key){
	   cout<<i<<endl;
	   count++;	
	   	
}
       all_occurence(arr,8,10,++i);
}

int main(){
	int arr[8]={5,5,2,3,2,3,4,5};
    all_occurence(arr,8,10,0);
	return 0;
}
