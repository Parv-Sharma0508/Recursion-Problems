#include <iostream>
using namespace std;

bool sorted_Array(int arr[], int size){
	if(size==0 || size==1){
	    return true;	
	}
	bool is_sorted=sorted_Array(arr+1,size-1);
	
	if(arr[0]<arr[1]){
		return false;
	}
	return is_sorted;
	
}



int main(){
	
	int arr[]={2,54,55,56};
	cout<<sorted_Array(arr,4);
	return 0;
}
