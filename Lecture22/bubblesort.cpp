#include <iostream>
using namespace std;
// void bubblesort(int*arr,int n,int i){//n==6
// 	// base case 
// 	if(i==n-1){
// 		return;
// 	}


// 	// recursive case
// 	for(int j=0;j<=n-2;j++){
// 		if(arr[j]>arr[j+1]){
// 			swap(arr[j],arr[j+1]);
// 		}
// 	}
// 	bubblesort(arr,n,i+1);


// }

void bubblesortpurerec(int*arr,int n,int i,int j){

	if(i==n-1){
		return;
	}

	// recursive case
	if(j>n-2){
		bubblesortpurerec(arr,n,i+1,0);

	}
	else{
		if(arr[j]>arr[j+1]){
			swap(arr[j],arr[j+1]);
		}
		bubblesortpurerec(arr,n,i,j+1);

	}
	

}
int main(){
	int arr[]={5,4,3,2,1,0,0,0,3,3,1,6};
	int n=sizeof(arr)/sizeof(int);

	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";

	}

	cout<<endl;
	// bubblesort(arr,n,0);
	bubblesortpurerec(arr,n,0,0);
	
// // bubble sort
	// for(int i=0;i<=n-2;i++){
	// 	for(int j=0;j<=n-2;j++){
	// 	if(arr[j]>arr[j+1]){
	// 		swap(arr[j],arr[j+1]);
	// 	}
	// }
	// }

	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";

	}

	cout<<endl;


	return 0;
}