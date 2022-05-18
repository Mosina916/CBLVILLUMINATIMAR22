#include<iostream>
using namespace std;

// int sum(int a,int b){
// 	int s=a+b;
// 	// cout<<s<<endl;
// 	return s;

// }


// int sum(int a,int b,int c){
// 	int s=a+b+c;
// 	// cout<<s<<endl;
// 	return s;

// }

// int sum(int a,int b,int c,int d){
// 	int s=a+b+c+d;
// 	// cout<<s<<endl;
// 	return s;

// }

// genral function
int sum(int a=0,int b=0,int c=0,int d=0){//default argumets
	int s=a+b+c+d;//3+5+0+0
	return sum;
}



int main(){
	cout<<sum(3,5)<<endl;
	cout<<sum(3,4,6)<<endl;
	cout<<sum(3,5,2,1)<<endl;


	

	

	return 0;
}