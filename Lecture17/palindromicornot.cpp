#include<iostream>
using namespace std;
// length(char *arr){
int length(char arr[]){

	int count=0;
	int i=0;

// loop
	while(arr[i]!='\0'){
		count++;//5
		i++;//5	

	}

	return count;
	


}
// bool ispalindromeornot(char arr[]){
// 	int i=0;
// 	int j=length(arr)-1;//5
// // loop
// 	while(j>i){
// 		if(arr[i]==arr[j]){
// 		i++;
// 		j--;
// 	}
// 	else{
// 		return false;
// 	}

// 	}
// 	return true;
	


// }

bool ispalindromeornot(char arr[]){
	int i=0;
	int j=length(arr)-1;//5
// loop
	while(j>i){
		if((arr[i]==arr[j])||(arr[i]==(arr[j]+32))||(arr[i]==(arr[j]-32))){
		i++;
		j--;
	}
	else{
		return false;
	}

	}
	return true;
	


}
int main(){


	// char ch;
	// cin>>ch;
	// ch=ch+32;//65+32-->97
	// cout<<ch<<endl;


	// char arr[]="Hello";
	char arr[1000];
	cin.getline(arr,1000);//nittin
	if(ispalindromeornot(arr)){
		cout<<"yes palindromic"<<endl;
	}
	else{
		cout<<"Not palindromic"<<endl;
	}




	return 0;
}