#include <iostream>
using namespace std;
int xpowerx(int x,int n){ //2 0
	// base case 
	if(n==0){
		return 1;
	}


	// /recursive case
	return x*xpowerx(x,n-1);
}

int main(){
	int n,x; //
	cin>>x>>n; //x^n  //2 4
	cout<<xpowerx(x,n)<<endl;



	return 0;
}