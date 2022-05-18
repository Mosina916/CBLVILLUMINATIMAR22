#include<iostream>
using namespace std;
void update(int*z){
	*z=*z+20;
	// x=x+20

	cout<<"value of *z inside update function is : "<<*z<<endl;//30


}

int main(){
	int x=10;
	int*y=&x;//200
	cout<<"value of x before update function in main is : "<<x<<endl;//10
	update(y);
	cout<<"value of x after update function in main is : "<<x<<endl;//30



	return 0;
}