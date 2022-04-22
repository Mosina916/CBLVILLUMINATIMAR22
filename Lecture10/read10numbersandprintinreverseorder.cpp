#include<iostream>
using namespace std;
int i;
int main(){
	int arr[10];
	for(int i=0;i<10;i++){
		cin>>arr[i];
	}

	for(int i=9;i>-1;i--){
		cout<<arr[i]<<" ";

	}

	cout<<endl;
	
	// using global variable

	// for(i=0;i<10;i++){
	// 	cin>>arr[i];
	// }

	// for(i=9;i>=0;i--){
	// 	cout<<arr[i]<<" ";

	// }




	 

	return 0;
}