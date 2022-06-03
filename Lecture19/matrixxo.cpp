#include <iostream>
using namespace std;
void formmatrix(char arr[100][100],int trows,int tcols){
	
	int si=0,sj=0,ej=tcols-1,ei=trows-1;
	char ch='X';
	
	// loop
	while(si<=ei&&sj<=ej){
		// pehle row
	for(int j=sj;j<=ej;j++){
		arr[si][j]=ch;

	}
	si++;//1
	for(int i=si;i<=ei;i++){
		arr[i][ej]=ch;

	}
	ej--;//1

	for(int k=ej;k>=sj;k--){//-1
	arr[ei][k]=ch;
	}
	ei--;
	for(int l=ei;l>=si;l--){
		arr[l][sj]=ch;

	}
	sj++;//1
	if(ch=='X'){
		ch='O';
	}
	else{
		ch='X';
	}

	


	}

	


	


	


}

int main(){
	
	int trows,tcols;
	cin>>trows>>tcols;
	char arr[100][100];
// >4,cols-->4
	formmatrix(arr,trows,tcols);

	for (int i = 0; i <trows; ++i)
	{
		for(int j=0;j<tcols;j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}

	


	return 0;
}