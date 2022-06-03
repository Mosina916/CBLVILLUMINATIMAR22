#include <iostream>
using namespace std;
// fibo(int pos){
// 	// base case


// 	// recursive case
// 	int chotaans1=fibo(pos-1);
// 	int chotaans2=fibo(pos-2);


// 	// calculate the ans
// 	int finalans=chotaans1+chotaans2;
// 	return finalans;
// }

int fibo(int pos){//0
	// base case stopping condition
	if(pos==0){
		return 0;//
	}
	if(pos==1){
		return 1;
	}


	// recursive case
	return fibo(pos-1)+fibo(pos-2);


	
}
int main(){
	int pos;
	cin>>pos;
	cout<<"fibo no is : "<<fibo(pos)<<endl;
	return 0;//terminate
}