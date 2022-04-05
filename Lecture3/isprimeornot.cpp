// isprimeornot.cpp
#include<iostream>
using namespace std;
int main(){
	int no;
	cin>>no;//1

	if(no>=2){
		int i=2;


// loop
	while(i<=no-1){ //2<=0

			// if(no%i==0){ //7%2 7%3 7%4 7%5 7%6

		if(no%i==0){ //9%3

		// i s also the factor of no;
			cout<<no<<" is not prime"<<endl;
			return 0; //program terminate 
	}
	i=i+1; //4


	}
	cout<<no<<" is prime "<<endl;


	}

	



	return 0;
}