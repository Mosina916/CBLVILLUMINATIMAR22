#include<iostream>
using namespace std;
void updatearr(int arr[],int n){
	for(int i=0;i<n;i++){
		arr[i]=arr[i]+10;

	}


	cout<<"printing array inside updatearr function "<<endl;
	for (int i = 0; i <n; ++i)
	{
		cout<<arr[i]<<" ";
	}

	cout<<endl;//13,14,18,17,11,15}
	
}

int main(){
	int arr[]={3,4,8,7,1,5};
	int n=sizeof(arr)/sizeof(int);

		cout<<"printing array inside main before updatearr function "<<endl;
	for (int i = 0; i <n; ++i)
	{
		cout<<arr[i]<<" ";
	}

	cout<<endl; //3,4,8,7,1,5
	
	updatearr(arr,n);

	cout<<"printing array inside main after updatearr function "<<endl;
	for (int i = 0; i <n; ++i)
	{
		cout<<arr[i]<<" ";
	}

	cout<<endl;//13,14,18,17,11,15

	// arrays are by default passes by refrence 


	return 0;
	
}