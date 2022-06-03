#include<iostream>
using namespace std;
int main(){
	// syntax
	// int array
	// datatype arrayname[rows][cols];

	// int arr[3][4]={
	// 	{1,2,6,9},
	// 	{5,3,4,16},
	// 	{9,2,6,3}

	// };

// row no-->0
	// cout<<arr[0][0]<<" ";
	// cout<<arr[0][1]<<" ";
	// cout<<arr[0][2]<<" ";
	// cout<<arr[0][3]<<endl;
	// for(int j=0;j<=3;j++){
	// 	cout<<arr[0][j]<<" ";

	// }
	// cout<<endl;


	// row no-->1
	// cout<<arr[1][0]<<" ";
	// cout<<arr[1][1]<<" ";
	// cout<<arr[1][2]<<" ";
	// cout<<arr[1][3]<<endl;

	// for(int j=0;j<=3;j++){
	// 	cout<<arr[1][j]<<" ";

	// }
	// cout<<endl;



	// row no-->2
	// cout<<arr[2][0]<<" ";
	// cout<<arr[2][1]<<" ";
	// cout<<arr[2][2]<<" ";
	// cout<<arr[2][3]<<endl;

	// for(int j=0;j<=3;j++){
	// 	cout<<arr[2][j]<<" ";

	// }
	// cout<<endl;


// // 2nd way of intilization
// 	// you can ignore no of rows but not no of cols

// 	int arr[][4]={
// 		{1,2,6,9},
// 		{5,3,4,16},
// 		{9,2,6,3}

// 	};

	// 3rd way of intilization
	

	// int arr[3][4];


	// row no-->0
	// cin>>arr[0][0];
	// cin>>arr[0][1];
	// cin>>arr[0][2];
	// cin>>arr[0][3];
	// for(int j=0;j<=3;j++){
	// 	cin>>arr[0][j];

	// }
	


	// row no-->1

	// cin>>arr[1][0];
	// cin>>arr[1][1];
	// cin>>arr[1][2];
	// cin>>arr[1][3];
	// for(int j=0;j<=3;j++){
	// 	cin>>arr[1][j];

	// }
	


	// row no-->2
	// cin>>arr[2][0];
	// cin>>arr[2][1];
	// cin>>arr[2][2];
	// cin>>arr[2][3];
	// for(int j=0;j<=3;j++){
	// 	cin>>arr[2][j];

	// }


	// 4th way of intilization

	int arr[100][100];
	int rows,cols;
	cin>>rows>>cols;//3 4



// take input of int array
	for(int i=0;i<=rows-1;i++){
		for(int j=0;j<=cols-1;j++){
		cin>>arr[i][j];

	}
	

	}
	
	

// print 2d int array 
	for(int i=0;i<=rows-1;i++){
		for(int j=0;j<=cols-1;j++){
		cout<<arr[i][j]<<" ";

	}
	cout<<endl;


	}
	








	return 0;
}