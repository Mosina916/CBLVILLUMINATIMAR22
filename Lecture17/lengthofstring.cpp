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
int main(){
	// char arr[]="Hello";
	char arr[1000];
	cin.getline(arr,1000);
	cout<<"length of arr is : "<<length(arr)<<endl;




	return 0;
}