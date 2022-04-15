#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;  //4

	// xor from 1 to n
	int y=0;
	int i=1;
	while(i<=n){
		y=i^y;//1^0-->1^2^3^4
		i=i+1;//5
	}

	// 1 to n-->1  no is missing in between
	int counter=1;
	int x=0;
	int no;
	// loop
	while(counter<=n-1){//4<=3
		cin>>no; //4
	x=no^x;//2^0-->1^2-->^4
	counter=counter+1;//4

	}

	cout<<"missing no is : "<<(x^y)<<endl;

	return 0;
}