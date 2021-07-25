#include <iostream>
using namespace std;
int last_occurence_using_Arr_methods(int arr[],int size , int key){
      if(size==0){
      	return -1;
	  }
	  int output=1+last_occurence_using_Arr_methods(arr+1,size-1,4);
	  cout<<"This is output value:"<<output<<endl;
	  if(output==0 ){
	  	if(arr[0]==key){
	  		return 0;
		  }
	  	else{
	  		return -1;
		  }
	  }
	  
	  else{
	  	return output;
	  }
       
}
int main() {
	int arr[]={5,4,5,3,2,2};
	
	cout<<last_occurence_using_Arr_methods(arr,6,4);
	return 0;
}
