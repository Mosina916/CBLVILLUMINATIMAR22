#include<iostream>
using namespace std;
int main(){
	// int arr[]={5,1,4,2,3};
	// int n=sizeof(arr)/sizeof(int);//5

	int n;
	cin>>n;
	int arr[100];
	for (int i = 0; i <n; ++i)
	{
		cin>>arr[i];
	}

	cout<<"Before insertion sort : "<<endl;
	for(int i=0;i<n;i++){
		cout<<arr[i]<<endl;
	}


	// insertion sort
	int j;
	for(int i=1;i<n;i++){
		int currele=arr[i];
		for(j=i-1;j>=0;j--){
			if(currele<arr[j]){
				arr[j+1]=arr[j];

			}
			else{
				break;
			}
		}
		arr[j+1]=currele;
	}
	cout<<"After insertion sort : "<<endl;
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;

	return 0;
}