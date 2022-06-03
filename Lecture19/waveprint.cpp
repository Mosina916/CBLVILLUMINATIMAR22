#include <iostream>
using namespace std;
void waveprint(int arr[100][100],int trows,int tcols){
	for(int colno=0;colno<=tcols-1;colno++){
		if(colno%2==0){
		// even colno 
		// downward dire
		for(int rowno=0;rowno<=trows-1;rowno++){
			cout<<arr[rowno][colno]<<" ";

		}
		cout<<endl;
		
	}
	else{
		// odd colno
		// upward dir
		for(int rowno=4;rowno>=0;rowno--){
			cout<<arr[rowno][colno]<<" ";

		}
		cout<<endl;
	}
	}
	


}

int main(){
	// int arr[][4]={
	// 	{1,3,5,7},
	// 	{2,4,10,11},
	// 	{6,12,13,14},
	// 	{9,15,19,20},
	// 	{16,3,1,2}

	// };
	int trows,tcols;
	cin>>trows>>tcols;
	int arr[100][100];
// input
	for (int i = 0; i <trows; ++i)
	{
		for(int j=0;j<tcols;j++){
			cin>>arr[i][j];
		}
	}
	// rows-->5,cols-->4
	waveprint(arr,trows,tcols);

	


	return 0;
}