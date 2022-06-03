#include <iostream>
using namespace std;
int sumofarray(int *arr,int n){
	// base case
	// if(n==1){
	// 	return arr[0];
	// }
	if(n==0){
		return 0;
	}
	
	// recursive case
	return arr[0]+sumofarray(arr+1,n-1);

}

int sumofarray2(int *arr,int n){
	// base case
	// if(n==1){
	// 	return arr[0];
	// }
	if(n==0){
		return 0;
	}
	
	// recursive case
	return arr[n-1]+sumofarray(arr,n-1);

}

int sumofarray3(int *arr,int n,int i){
	// base case
	if(i==n){
		return 0;
	}
	
	
	// recursive case
	return arr[i]+sumofarray3(arr,n,i+1);

}






int main(){
	int arr[]={8,1,2,3,4};

	int n=sizeof(arr)/sizeof(int);

	cout<<"sum of array is "<<sumofarray3(arr,n,0)<<endl;
	
	
	
	return 0;//terminate
}