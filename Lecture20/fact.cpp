#include <iostream>
using namespace std;
// int fact(int n){
// 	// base case -->mandatory step
// 	if(n==0){
// 		return 1;
// 	}


// 	// recursive case
// 	int chotaans=fact(n-1);//24-->mandatory step

// 	// with the help of base case and rec case we find the final ans
// 	int finalans=n*chotaans;//5*24-->120
// 	return finalans;

// }

int fact(int n){//0
	// base case -->mandatory step
	if(n==0){
		return 1;
	}


	// recursive case
	return n*fact(n-1);//5*24-->120

}
int main(){
	int n;
	cin>>n;
	cout<<"fact is "<<fact(n)<<endl;



	return 0;
}