#include<iostream>
using namespace std;
// void mergetwosortedarrays(int *arr1,int s1,int *arr2,int s2){
// 	int i=0,j=0,k=0;
// 	int temp[1000000];
// 	// loop
// 	while(j<s2 and i<s1){
// 		if(arr1[i]>arr2[j]){
// 		temp[k]=arr2[j];
// 		k++;
// 		j++;

// 	}
// 	else{
// 		temp[k]=arr1[i];
// 		k++;
// 		i++;
// 	}

// 	}
// 	// j==s2 -->arr2 hai wo khatam ho gayi hai
// 	// jo arr1 hai usko copy karlo
// 	while(i<s1){
// 		temp[k]=arr1[i];
// 		k++;
// 		i++;

// 	}
// 	// i==s1 -->arr1 hai wo khatam ho gayi hai
// 	// jo arr2 hai usko copy karlo
// 	while(j<s2){
// 		temp[k]=arr2[j];
// 	k++;
// 	j++;

// 	}
// 	for(int i=0;i<k;i++){
// 		cout<<temp[i]<<" ";
// 	}
// 	cout<<endl;	

// }
void mergetwosortedarrays(int *arr,int s,int e){
	int mid=(s+e)/2;//2
	int i=s;
	int j=mid+1;
	int k=s;//0
	int temp[1000000];

while(i<=mid and j<=e){
	if(arr[i]<arr[j]){
		temp[k]=arr[i];
		i++;
		k++;

	}
	else{
		temp[k]=arr[j];
		j++;
		k++;
	}


}
while(j<=e){
	temp[k]=arr[j];
	j++;
	k++;
}

while(i<=mid){
	temp[k]=arr[i];
	i++;
	k++;
}

// copy elements from temp to arr back
for(int l=s;l<=e;l++){
	arr[l]=temp[l];

}

}
void mergesort(int *arr,int s,int e){
	// base case
	if(s==e){
		return;

	}


	// recursive case
	// divide array throught mid
	int mid=(s+e)/2;


	// sort two parts
	mergesort(arr,s,mid);//1 2 4
	mergesort(arr,mid+1,e);//3 5


	// merge two sorted parts
	mergetwosortedarrays(arr,s,e);

}

int main(){
	int arr[]={4,2,1,1,0,0,3,7,6,5,1,5,3};
	int n=sizeof(arr)/sizeof(int);
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	mergesort(arr,0,n-1);

	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;




	return 0;
}