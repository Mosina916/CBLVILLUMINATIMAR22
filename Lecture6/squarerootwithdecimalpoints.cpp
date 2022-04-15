#include <iostream>
using namespace std;
int main(){
	int no;
	cin>>no;//9
	int dp;
	cin>>dp;//2


	float i=0;
	float gap=1;

	int times=1;


// loop
	while(times<=dp+1){
		 // loop
	while(i*i<=no){//0*0<=9 1*1<=9 2*2<=9 3*3<=9

	i=i+gap;//3+0.1-->3.1 3.2 3.3+0.01-->3.31 3.32 
	}

	i=i-gap; //4-1//3.4-0.1 3.3 3.32-0.01
	gap=gap/10;//1/10-->0.1/10-->0.01/10-->0.001 

	times++;//4



	}

	cout<<"square root is "<<i<<endl;



//




	return 0;
}