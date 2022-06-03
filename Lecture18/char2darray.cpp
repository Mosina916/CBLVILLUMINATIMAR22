#include<iostream>
using namespace std;
int main(){
	// syntax
	// char array
	// datatype arrayname[rows][cols];
	// 1st way
	// char arr[3][3]={
	// 	{'D','O','G'},
	// 	{'C','A','T'},
	// 	{'R','A','T'}

	// };

	// cout<<arr[0]<<endl;//"DOG"  //DOGCATRAT?
	// cout<<arr[1]<<endl;//"CAT"//CATRAT?
	// cout<<arr[2]<<endl;//"RAT" //RAT?

	// char arr[3][4]={
	// 	{'D','O','G','\0'},
	// 	{'C','A','T','\0'},
	// 	{'R','A','T','\0'}

	// };


	// char arr[][4]={
	// 	{'D','O','G','\0'},
	// 	{'C','A','T','\0'},
	// 	{'R','A','T','\0'}

	// };

	// char arr[3][4]={
	// 	"DOG",
	// 	"CAT",
	// 	"RAT"

	// };


	// char arr[][4]={
	// 	"DOG",
	// 	"CAT",
	// 	"RAT"

	// };

	// char arr[3][10]={
	// 	"codingg",
	// 	"hello",
	// 	"elephant"

	// };

		// cout<<arr[0]<<endl;//"DOG"  
	// cout<<arr[1]<<endl;//"CAT"
	// cout<<arr[2]<<endl;//"RAT"

	// // char arr[100][100];


	char arr[100][100];
	int rows,cols;
	cin>>rows>>cols;//3 4


	// // take input of int array
	for(int i=0;i<=rows-1;i++){
		for(int j=0;j<=cols-1;j++){
		cin>>arr[i][j];

	}
	

	}


	// // print 2d int array 
	for(int i=0;i<=rows-1;i++){
		for(int j=0;j<=cols-1;j++){
		cout<<arr[i][j]<<" ";

	}
	cout<<endl;


	}



	








	return 0;
}