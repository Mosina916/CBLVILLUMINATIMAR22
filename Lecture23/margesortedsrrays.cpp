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

int main(){
	int arr1[]={3,6,6,6,9};
	int arr2[]={1,4,5,8};
	int s1=sizeof(arr1)/sizeof(int);
	int s2=sizeof(arr2)/sizeof(int);
	mergetwosortedarrays(arr1,s1,arr2,s2);




	return 0;
}