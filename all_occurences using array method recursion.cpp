#include <iostream>
using namespace std;
void all_occurence_using_Arr_methods(int arr[],int size , int key){
      if(size==0){
      	return -1;
	  }
	  if(arr[0]==key){
	  	cout<<
	  }
	  int output=1+all_occurence_using_Arr_methods(arr+1,size-1,40);
	  if(output==0){
	  	cout<<"Element not found!!!"
	  }
	  else{
	  	cout<<output;
	  }
       
}
int main() {
	int arr[]={5,5,2,3,2,3,4,5};
	cout<<first_occurence_using_Arr_methods(arr,8,5);
	return 0;
}
