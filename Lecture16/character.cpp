#include<iostream>
using namespace std;



int main(){
	// char ch='F';
	// cout<<ch<<endl;//F
	// cout<<&ch<<endl;//F

	// character arrays

	// size id ignored
	// char arr[]={'R','A','T','\0'};

	// char arr[4]={'R','A','T','\0'};

	// char arr[4]="RAT";
	// char arr[]="RAT";

	// // string -->character array terminaed by NULL

	// cout<<arr<<endl;//RAT

	// int arr2[]={3,4,2};
	// cout<<arr2<<endl;//address of first bucket

	// user defined array;

	// char arr[100]={'R','a','t',' ','i','s'}

// this will ignore the space
	// char arr3[100];
	// cin>>arr3;//cin takes many character at a time
	// cout<<arr3<<endl;

	// cin.get
	// doesn't ignore space -->take only 1 character at a time
// 	char arr[100];
// 	// \n -->enter /
// 	char ch=cin.get();//'R'
// 	int i=0;

// // // loop
// 	while(ch!='$'){
// 		arr[i]=ch;
// 	i++;
// 	ch=cin.get();//'A' 'B' '\0'


// 	}

	char arr[100];
	// cin.getline(nameofarr,size of arr,delimiter);
	cin.getline(arr,100,'$');



	// cout<<arr<<endl;

	for(int i=0;arr[i]!='\0';i++){
		cout<<arr[i];
	}
	cout<<endl;
	




	

	return 0;
}