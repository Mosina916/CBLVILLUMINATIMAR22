// isprimeornot.cpp
#include<iostream>
using namespace std;
int main(){
	int tr;
	cin>>tr;//4
	int notoprint=1;



	int row=1;

	while(row<=tr){ //2<=4

		// for single row-->3
	// =======================================
	int co=1;
// loop
	while(co<=row){ //1<=3
		cout<<notoprint<<" ";
		notoprint=notoprint+1;//4

	co=co+1;//3


	}
	cout<<endl;
	// =======================================
	row=row+1; //3




	}

	return 0;
}