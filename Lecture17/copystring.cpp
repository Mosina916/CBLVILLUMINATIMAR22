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


void copystringbtoa(char a[100],char b[100]){
	int i=0;
	int j=0;

// loop
	while(j<=length(b)){
		a[i]=b[j];
		i++;
		j++;


	}

	
}
int main(){
	char a[100];
	char b[100];
	cin.getline(a,100);//"hello"-->"elephant"
	cin.getline(b,100);//"elephant"

	cout<<"value of array a before copy is : "<<a<<endl;
	cout<<"value of array b before copy is : "<<b<<endl;


	copystringbtoa(a,b);

	cout<<"value of array a After copy is : "<<a<<endl;
	cout<<"value of array b After copy is : "<<b<<endl;


	


	return 0;
}