#include <iostream>
using namespace std;
void spiralprint(int arr[100][100],int trows,int tcols){
	
	int si=0,sj=0,ej=tcols-1,ei=trows-1;

	
	// loop
	while(si<=ei&&sj<=ej){
		// pehle row
	for(int j=sj;j<=ej;j++){
		cout<<arr[si][j]<<" ";

	}
	si++;//1
	for(int i=si;i<=ei;i++){
		cout<<arr[i][ej]<<" ";

	}
	ej--;//1

	for(int k=ej;k>=sj;k--){//-1
	cout<<arr[ei][k]<<" ";
	}
	ei--;
	for(int l=ei;l>=si;l--){
		cout<<arr[l][sj]<<" ";

	}
	sj++;//1

	


	}

	


	
}

int main(){
	
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
	// rows-->4,cols-->4
	spiralprint(arr,trows,tcols);

	


	return 0;
}