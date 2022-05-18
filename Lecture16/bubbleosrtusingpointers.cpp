#include <iostream>
using namespace std;
void bubblesort(int *arr,int n){
	// int x=10;
	for(int i=0;i<=n-2;i++){
		for(int j=0;j<=n-2;j++){
		// if(arr[j]>arr[j+1]){
		// 	swap(arr[j],arr[j+1]);
		// }

			if(*(arr+j)>*(arr+j+1)){
			swap(*(arr+j),*(arr+j+1));
		}
	}


	}

	// return x;

	// arr[i]-->*(arr+i)
	

}
int main(){
	int arr[]={5,4,3,2,1};
	int n=sizeof(arr)/sizeof(int);


// // bubble sort
	bubblesort(arr,n);
	

	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";

	}

	cout<<endl;









	return 0;
}