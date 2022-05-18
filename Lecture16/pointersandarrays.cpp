#include<iostream>
using namespace std;
// void update(int arr[],int n){
// 	for (int i = 0; i <n; ++i)
// 	{
// 		arr[i]=arr[i]+10;
// 	}
// }


void update(int *arr,int n){
	for (int i = 0; i <n; ++i)
	{
		// arr[i]=arr[i]+10;
		*(arr+i)=*(arr+i)+10;
	}
}


int main(){
	int arr[]={2,5,4,6,3};
	int n=sizeof(arr)/sizeof(int);
	// if i will print array's name it is giving me address of first bucket
	// cout<<arr<<endl;//0x7ffee06f3930

	// // cout<<&arr[0]<<endl;//0x7ffee06f3930
	// for (int i = 0; i <n; ++i)
	// {
	// 	cout<<arr[i]<<" "<<*(arr+i)<<endl;
	// }


	update(arr,n);

	for (int i = 0; i<n; ++i)
	{
		cout<<arr[i]<<endl;
	}


	

	return 0;
}