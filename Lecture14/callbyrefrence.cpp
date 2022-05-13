#include<iostream>
using namespace std;
void update(int&y){
	y=y+100;

	cout<<"value of y inside update function is "<<y<<endl;//190

}

int main(){

		int x=90;
	cout<<"value of y before update is "<<x<<endl;//90
	update(x);

	cout<<"value of y inside main after update is "<<x<<endl;//190



	// int x=40;
	// int &y=x;

	// cout<<x<<endl;
	// cout<<y<<endl;

	// x=x+90;


	// cout<<x<<endl;
	// cout<<y<<endl;







	return 0;
	
}