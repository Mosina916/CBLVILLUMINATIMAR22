#include<iostream>
using namespace std;
int main(){
	int arr[]={5,1,4,2,3};
	int n=sizeof(arr)/sizeof(int);//5

	cout<<"Before selection sort : "<<endl;
	for(int i=0;i<n;i++){
		cout<<arr[i]<<endl;
	}


	// selection sort
	for(int pos=0;pos<=n-2;pos++){
		int min=pos;
		for(int j=pos+1;j<n;j++){
			if(arr[j]<arr[min]){
				min=j;

			}

		}
		swap(arr[pos],arr[min]);
	}
	cout<<"After selection sort : "<<endl;
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;

	return 0;
}