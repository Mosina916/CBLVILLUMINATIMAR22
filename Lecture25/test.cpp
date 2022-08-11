#include <iostream>
using namespace std;
int sol[100][100]={0};
int co=0;
bool ratinmaze(char maze[][10],int r,int c,int i,int j){
	// base case
	if(i==r-1&&j==c-1){
		co++;
		sol[i][j]=1;
		for(int l=0;l<r;l++){
			for(int k=0;k<c;k++){
				cout<<sol[l][k]<<" ";
			}
			cout<<endl;
		}
		sol[i][j]=0;

		cout<<endl;
		return false;

		// return true;
	}
	// recursive case
	sol[i][j]=1;

	// kya aage jaa sakta hai
	if(j<=c-2&&maze[i][j+1]!='X'){
		bool kyamujheaageseansmila=ratinmaze(maze,r,c,i,j+1);
		if(kyamujheaageseansmila==true){
			return true;
		}


	}

	// kya neeche jaa sakta hai
	if(i<=r-2&&maze[i+1][j]!='X'){
		bool kyamujheneecheseansmila=ratinmaze(maze,r,c,i+1,j);
		if(kyamujheneecheseansmila==true){
			return true;
		}

		

	}

	sol[i][j]=0;//backtracking 
	return false;



}
int main(){
	char maze[][10]={
		"OOOO",
		"OOXX",
		"XOOX",
		"XOOO"

	};

	int r=4;
	int c=4;
	bool ans=ratinmaze(maze,r,c,0,0);
	// if(ans==false){
	// 	cout<<"no sol exist "<<endl;
	// }
	// else{
	// 	cout<<"sol exist "<<endl;

	// }

	cout<<co<<endl;


	return 0;
}