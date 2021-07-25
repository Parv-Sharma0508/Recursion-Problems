#include<iostream>
using namespace std;

int* all_occurences(int arr[],int size,int key){
    static int x=0;
	if(size==0 ){
		return new int[x]; 
	}
	if(size==0 && x==0){
		cout<<"Key not found";
	}
	if(arr[0]==key){
		x++;
	}
     int *p=all_occurences(arr+1,size-1,key);
     if(arr[0]==key){
		*(p+(x-1))=7-size;
		x--;
	}
	return p;
    
}
int main(){
	int arr[7]={1,2,3,2,1,5,2};
	int* p=all_occurences(arr,7,4);
//	cout<<sizeof(p)<<endl;
//	cout<<sizeof(*p)<<endl;
	for(int i=0;i<2;i++){
		cout<<*(p+i)<<endl;
	}
//	
//for(int i=0;i<sizeof(*p);i++){
//	cout<<sizeof(*p)<<endl;
//	cout<<"--------------------------------"<<endl;
//        cout<<*(p+i)<<endl;
//        cout<<"<-------------------------------->"<<endl;
//	 }
	
	
	return 0;
}
