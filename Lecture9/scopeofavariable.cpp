#include <iostream>
using namespace std;
int p=78;

// society 2
// society 3
// society 1 
int main(){

	int x=67,y=60,z=40,p=98;
	// cin>>x>>y>>z;
	// cout<<"x is "<<x<<endl;//30
	// cout<<"y is "<<y<<endl;//20
	// cout<<"z is "<<z<<endl;//40

	cout<<"p is "<<p<<endl;//98

	if(x>y){
		// cout<<"x is "<<x<<endl;//30
		// cout<<"y is "<<y<<endl;//20
		// cout<<"z is "<<z<<endl;//40
		int x=67;
		int a=50;

		// cout<<"x is "<<::x<<endl;//67
		cout<<"y is "<<y<<endl;//60
		cout<<"z is "<<z<<endl;//40
		cout<<"a is "<<a<<endl;//50
		cout<<"p is "<<p<<endl;//98

		// i want global variable p
		// scope resoluation operator
		cout<<"p is "<<::p<<endl;//78



	}
	else if(y>z){
		int a=59;
		cout<<"hello world"<<endl;
		// cout<<"x is "<<::x<<endl;//40
		cout<<"a is "<<a<<endl;//40
		cout<<"p is "<<p<<endl;//78
		cout<<"p is "<<::p<<endl;//78


	}
	else{
		cout<<"i am a teacher"<<endl;
		cout<<"y is "<<y<<endl;

	}


	// cout<<"a is "<<a<<endl;//40



	return 0;
}