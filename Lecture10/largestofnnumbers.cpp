#include<iostream>
#include<climits>
using namespace std;
int main(){
	int n;
	cin>>n;//5

	int arr[100];

// input user se le liya

	for(int i=0;i<=n-1;i++){
		cin>>arr[i];

	}

	int largest=INT_MIN;

	for(int k=0;k<n;k++){
		if(arr[k]>largest){
		largest=arr[k];//62
	}
	

	}


	cout<<"largest is : "<<largest<<endl;
	




	




	 

	return 0;
}