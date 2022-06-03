#include<iostream>
#include<algorithm>
using namespace std;

// bool mycomp(int a,int b){ //3 2
// 	// if(a<b){
// 	// 	return true;

// 	// }
// 	// return false;

// 	return a>b;//3
	

// }

bool mycomp2(int a,int b){ //3 2
	// if(a<b){
	// 	return true;

	// }
	// return false;
	return a<b;//3
	
}



int main(){
	int arr[]={4,3,2,5,6,7,1,4,3,3};
	int size=sizeof(arr)/sizeof(int);//10

	// sorting -->increasing
	// bubble sort

	// selection sort

	// insertion sort

	// inbuilt 
	// sort(arrayname,arrayname+size);
	cout<<"before sorting"<<endl;

	for (int i = 0; i <size; ++i)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;

	sort(arr,arr+size,mycomp2);//by default -->increasing order

	// sort(arr,arr+size,mycomp);//should print in dec order 
	// i pass a third argument eg comperator 

	cout<<"After sorting"<<endl;

	for (int i = 0; i <size; ++i)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;


	return 0;
}