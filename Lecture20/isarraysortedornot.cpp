#include <iostream>
using namespace std;
// bool isarraysortedornot(int *arr,int n){
// 	// base case
// 	if(n==1){
// 		return true;
// 	}

// 	// recursive case
// 	if(isarraysortedornot(arr+1,n-1)&&arr[0]<=arr[1]){
// 		return true;
// 	}
// 	return false;

// }

bool isarraysortedornot2(int *arr,int n){
	// base case
	if(n==1){
		return true;
	}

	// recursive case
	if(isarraysortedornot2(arr,n-1)&&arr[n-2]<=arr[n-1]){
		return true;
	}
	return false;

}

// approach 3
bool isarraysortedornot3(int *arr,int n,int i){
	// base case
	if(i==n-1){
		return true;
	}


	// recursive case
	if(arr[i]<=arr[i+1]&&isarraysortedornot3(arr,n,i+1)){
		return true;
	}
	return false;

}

int main(){
	// int arr[]={8,1,2,3,4};
	int arr[]={0,1,2,3,4};
	int n=sizeof(arr)/sizeof(int);
	// if(isarraysortedornot2(arr,n)){
	// 	cout<<"Array is sorted"<<endl;
	// }
	// else{
	// 	cout<<"Array is not sorted"<<endl;

	// }

	if(isarraysortedornot3(arr,n,0)){
		cout<<"Array is sorted"<<endl;
	}
	else{
		cout<<"Array is not sorted"<<endl;

	}
	
	
	return 0;//terminate
}