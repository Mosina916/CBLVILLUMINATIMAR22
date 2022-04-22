#include<iostream>
using namespace std;
int main(){
	// continue statement

	// 1 10  6 

	int n;
	cin>>n;//10--> 1 2 3 4 5  7  9 10
	for(int i=1;i<=n;i++){
		if(i==6||i==8){
			continue; //control will go back to updation
		}
		cout<<i<<" ";
	}

	return 0; //exit terminate the progeam

}