#include<iostream>
using namespace std;

int* all_occurences(int arr[],int size,int key,int idx,int fsf){
    if(idx==size && fsf==0){
    	cout<<"Not found!!!";
    	return new int[0];
	}
	if(idx==size && fsf!=0){
		return new int[fsf];
	}
	if(arr[idx]==key){
		int* p=all_occurences(arr,size,key,idx+1,fsf+1);
		*(p+(fsf))=idx;
		return p;
	}
   	else{
		int* p=all_occurences(arr,size,key,idx+1,fsf);
		return p;
	}
    
}
int main(){
	int arr[7]={1,2,3,2,1,5,2};
	int* p=all_occurences(arr,7,10,0,0);

	for(int i=0;i<3;i++){
		cout<<*(p+i)<<endl;
	}

	return 0;
}
