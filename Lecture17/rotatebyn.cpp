#include<iostream>
using namespace std;
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
void rotatebyn(char arr[1000],int n){
 	int j=length(arr);//6
	int k=length(arr);//coding
	int s=length(arr);//6
// loop
 	while(j>=0){
 		arr[j+n]=arr[j];
 		j--;

 	}
 	// arr-->codcoding
 	int l=0;


// loop
 	for(int count=1;count<=n;count++){
 		arr[l]=arr[k];
	 	l++;
	 	k++;

 	}
 	arr[s]='\0';

 	



 	

 }


int main(){
	char arr[1000];
	int n;
	cin>>n;//3
	cin.ignore();
	cin.getline(arr,1000);//"coding"

	cout<<arr<<endl;

	rotatebyn(arr,n);//

	cout<<arr<<endl;

	


	


	return 0;
}