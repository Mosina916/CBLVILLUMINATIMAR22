#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;//5

	int arr[100];

// input user se le liya

	for(int i=0;i<=n-1;i++){
		cin>>arr[i];

	}
	int key;
	cin>>key;//6
	int j;

	for(j=0;j<n;j++){
		if(arr[j]==key){
		cout<<j<<endl;
		break;//line no 25 pe aayga
	}

	}
	if(j==n){
		cout<<"key not present";
	}




	




	 

	return 0;
}