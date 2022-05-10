#include <iostream>
using namespace std;
int main(){
	int arr[]={5,4,3,2,1};
	// int arr[]={5,5,3,2,1,6,6,0};
	// 'F'>'A'

	// char arr[]={'F','A','U','D'};
	int n=sizeof(arr)/sizeof(int);

	 // bubble sort

	// ist time-->pehla largest element sort kar rahi hun
	// for(int j=0;j<=n-2;j++){
	// 	if(arr[j]>arr[j+1]){
	// 		swap(arr[j],arr[j+1]);
	// 	}
	// }

// 2nd time
	// for(int j=0;j<=n-2;j++){
	// 	if(arr[j]>arr[j+1]){
	// 		swap(arr[j],arr[j+1]);
	// 	}
	// }


	// for(int j=0;j<=n-2;j++){
	// 	if(arr[j]>arr[j+1]){
	// 		swap(arr[j],arr[j+1]);
	// 	}
	// }

	// for(int j=0;j<=n-2;j++){
	// 	if(arr[j]>arr[j+1]){
	// 		swap(arr[j],arr[j+1]);
	// 	}
	// }


	// for(int i=1;i<=n-1;i++){
	// 	for(int j=0;j<=n-2;j++){
	// 	if(arr[j]>arr[j+1]){
	// 		swap(arr[j],arr[j+1]);
	// 	}
	// }


	// }


// // bubble sort
	for(int i=0;i<=n-2;i++){
		for(int j=0;j<=n-2;j++){
		if(arr[j]>arr[j+1]){
			swap(arr[j],arr[j+1]);
		}
	}


	}
	// 'A','D','F','U'


// 5 1 2 3 4
	 // optimized bubble sort
	for(int i=0;i<=n-2;i++){
		bool kyaswaphoraha=false;
		for(int j=0;j<=n-2-i;j++){
		if(arr[j]>arr[j+1]){
			// inbuilt swap
			// swap(arr[j],arr[j+1]);


			// // using 3rd variable
			// int temp=arr[j];
			// arr[j]=arr[j+1];
			// arr[j+1]=temp;


			// swap without using 3rd variable

			// b=a+b;
			// a=b-a;
			// b=b-a;

			// a-->arr[j] b-->arr[j+1]

			arr[j+1]=arr[j]+arr[j+1];
			arr[j]=arr[j+1]-arr[j];
			arr[j+1]=arr[j+1]-arr[j];

			// one line swap-->h/w
			// b=(a+b)-(a=b);
			arr[j+1]=(arr[j]+arr[j+1])-(arr[j]=arr[j+1]);



			kyaswaphoraha=true;
		}
	}
	if(kyaswaphoraha==false){
		break;

	}


	}



	


	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";

	}

	cout<<endl;









	return 0;
}