#include<iostream>
using namespace std;
void mergesort(int arr[],int start,int end){
	if(end>=start){
		return;
	}
	int mid=(start+end)/2;
	mergesort(arr,start,mid);
	mergesort(arr,mid+1,end);
	
	
}
