#include <iostream>
using namespace std;
void searchinamatrix(int arr[][4],int i,int j,int key){

// loop
	while(i<=3&&j>=0){
			if(arr[i][j]==key){
		cout<<"key is present at index "<<i<<" "<<j<<endl;
		return;//terminate karo
	}
	else if(arr[i][j]>key){
		j--;
	}
	else{
		i++;

	}

	}
	// matrix se bahar aa chuke hai
	cout<<"key is not present"<<endl;



}
int main(){
	int arr[][4]={
		{1,3,5,7},
		{2,4,10,11},
		{6,12,13,14},
		{9,15,19,20}
	};
	int key;
	cin>>key;//6
	// int i=0;
	// int j=3;

	searchinamatrix(arr,0,3,key);


	return 0;
}