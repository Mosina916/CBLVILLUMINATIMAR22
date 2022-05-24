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
// void appendbtoa(char *a,char b[100]){
// 	int i=length(a);//5
// 	int j=0;


// // loop
// 	// a[i++]=b[j++];
// 	while(j<=length(b)){
// 		a[i]=b[j];
// 		j++;
// 		i++;

// 	}

	

// }

void appendbtoa(char *a,char b[100]){
	int i=length(a);//5
	int j=0;

// with space
	a[i]=' ';
	i++;


// loop
	// a[i++]=b[j++];
	while(j<=length(b)){
		a[i]=b[j];
		j++;
		i++;

	}

	

}
int main(){
	char a[100];
	char b[100];
	cin.getline(a,100);//"hello"
	cin.getline(b,100);//"world"
	cout<<"value of array a before append is : "<<a<<endl;
	cout<<"value of array b before append is : "<<b<<endl;



	appendbtoa(a,b);

	cout<<"value of array a After append is : "<<a<<endl;
	cout<<"value of array b After append is : "<<b<<endl;




	return 0;
}