#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;//5


// pehla row

	// int row=1;
	// spaces
	int cs=1;
// loop
	while(cs<=n-1){
		cout<<" ";
		cs=cs+1;


	}
	// stars print
	int cstarts=1;
	while(cstarts<=n){
		cout<<"*";
		cstarts=cstarts+1;

	}
	cout<<endl;


	// 2,3 4 row


	int row=2;
	// spaces
	while(row<=n-1){
		int csp=1;
	while(csp<=n-row){
		cout<<" ";
		csp=csp+1;
	}

	cout<<"*";
	// n-2 times spaces
	int cspa=1;
	while(cspa<=n-2){
		cout<<" ";
		cspa=cspa+1;
	}

	cout<<"*";

	cout<<endl;
	row=row+1;

	}


	// 5th row
	int c=1;
	while(c<=n){
		cout<<"*";
		c=c+1;
	}
	cout<<endl;
	
	

	return 0;
}