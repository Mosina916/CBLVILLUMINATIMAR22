#include<iostream>
using namespace std;
int main(){
	int no;
	cin>>no; //9-->binary-->1001-->sol 1
	int count=0;

// sol 2
	// to calculate last digit in binary of 9

// loop
	while(no>0){
		int result=(no&1); //this can be 1 or 0

	if(result==1){
		// tou ld 1 thi
		// count++;
		// count=count+1;
		count+=1;//2

	}
	no=no>>1;//9>>1 1001>>1-->100-->0


	}

	cout<<"set bits "<<count<<endl;
	






	return 0;
}