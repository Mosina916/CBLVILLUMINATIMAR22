#include<iostream>
using namespace std;
// bool whetherkeyispresentornotinarr(int arr[100][100],int rows,int cols,int key){

// 	for(int i=0;i<=rows-1;i++){//3<=2
// 		// for sigle row
// 	for(int j=0;j<=cols-1;j++){//3<=2
// 		if(arr[i][j]==key){
// 		return true;
// 	}


// 	}

// 	}
// 	return false;
	

// }


// void keyispresentornotinarr(int arr[100][100],int rows,int cols,int key);

// bool keyispresentornotinarr(int arr[100][100],int rows,int cols,int key){
// // void keyispresentornotinarr(int arr[100][100],int rows,int cols,int key);
// 	for(int i=0;i<=rows-1;i++){//3<=2
// 		// for sigle row
// 	for(int j=0;j<=cols-1;j++){//3<=2
// 		if(arr[i][j]==key){//arr[1][2]==7
// 			cout<<"key is present at index "<<i<<" , "<<j<<endl;
// 			return true;
		
// 	}


// 	}

// 	}
// 	return false;
	

// }
// void keyispresentornotinarr(int arr[100][100],int rows,int cols,int key);
void keyispresentornotinarr(int arr[100][100],int rows,int cols,int key){

	for(int i=0;i<=rows-1;i++){//3<=2
		// for sigle row
	for(int j=0;j<=cols-1;j++){//3<=2
		if(arr[i][j]==key){//arr[1][2]==7
			cout<<"key is present at index "<<i<<" , "<<j<<endl;
			return;
		
	}


	}

	}
	// return;

	

}


int main(){
	// keyispresentornotinarr(arr[100][100],rows,cols,key);
	
	int arr[100][100];
	int rows,cols;
	cin>>rows>>cols;//3 3



// take input of int array
	for(int i=0;i<=rows-1;i++){
		for(int j=0;j<=cols-1;j++){
		cin>>arr[i][j];

	}
	

	}
	// return 0;
	int key;
	cin>>key;//60

	// if(whetherkeyispresentornotinarr(arr,rows,cols,key)){
	// 	cout<<"yes key is present"<<endl;

	// }
	// else{
	// 	cout<<"no key is not present"<<endl;

	// }


	// if(keyispresentornotinarr(arr,rows,cols,key)){
	// 	cout<<"yes key is present"<<endl;

	// }
	// else{
	// 	cout<<"no key is not present"<<endl;

	// }


	keyispresentornotinarr(arr,rows,cols,key);
	
	

// // print 2d int array 
// 	for(int i=0;i<=rows-1;i++){
// 		for(int j=0;j<=cols-1;j++){
// 		cout<<arr[i][j]<<" ";

// 	}
// 	cout<<endl;


// 	}

	
	return 0;
}