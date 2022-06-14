#include<iostream>
using namespace std;
// bool is7presentornot(int arr[],int n,int key){
// 	// base case
// 	if(n==0){
// 		return false;
// 	}


// 	// recursive case
// 	// if(arr[0]==7){
// 	// 	return true;
// 	// }

// 	if(arr[0]==key){
// 		return true;
// 	}
// 	return is7presentornot(arr+1,n-1,key);
// }


int firstindexof7(int*arr,int i,int n){
	// base case
	if(i==n){
		return -2;
	}



	// recursive case
	if(arr[i]==7){
		return i;
	}
	return firstindexof7(arr,i+1,n);




}

int lastindexof7(int*arr,int i){
	// base case
	if(i==-1){
		return -1;//this will repesent not present

	}

	// recursive case
	if(arr[i]==7){
		return i;
	}
	return lastindexof7(arr,i-1);




}

void allindicesof7(int*arr,int n,int i){
	// base case
	if(i==n){
		return;
	}


	// recursive case
	if(arr[i]==7){
		cout<<i<<" ";

	}
	allindicesof7(arr,n,i+1);

}
int main(){
	// int arr[]={2,1,6,7,3};

	int arr[]={2,4,5,3,7,87,7,7,6,7,3};//pehla seven index 1

	int n=sizeof(arr)/sizeof(int);
	// int key;
	// cin>>key;
	// if(is7presentornot(arr,n,key)){
	// 	cout<<" present"<<endl;

	// }
	// else{
	// 	cout<<" not present"<<endl;
	// }

	// cout<<"first index of 7 is "<<firstindexof7(arr,0,n)<<endl;

	// cout<<"last index of 7 is "<<lastindexof7(arr,n-1)<<endl;

	allindicesof7(arr,n,0);

	cout<<endl;





	return 0;
}