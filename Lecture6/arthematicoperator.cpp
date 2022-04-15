#include <iostream>
using namespace std;
int main(){

// pre inc 
	// int x=90;
	// int y=++x;
	// cout<<"value of x is "<<x<<endl; //91
	// cout<<"value of y is "<<y<<endl; //91


// post inc

	// int x=90;
	// int y=x++;
	// cout<<"value of x is "<<x<<endl; //91
	// cout<<"value of y is "<<y<<endl; //90


// pre dec
	// int x=90;
	// int y=--x;
	// cout<<"value of x is "<<x<<endl;
	// cout<<"value of y is "<<y<<endl;


// post dec
	// int x=90;
	// int y=x--;
	// cout<<"value of x is "<<x<<endl;
	// cout<<"value of y is "<<y<<endl;


	int a=7,b=0,c=1;


	if(--a&&b++&&c++){ // 6 1 1
		cout<<"hello world"<<endl;
	}
	else if(--b&&--c&&++a){ //6 0 1
		cout<<"coding blocks"<<endl;
	}

	else if(T&&b++&&++c){ //5 1 1
		cout<<"i got a new gift"<<endl;
	}
	else{
		cout<<"i have a laptop"<<endl;

	}


	cout<<a<<" "<<b<<" "<<c<<endl; //5 1 1



	
	return 0;
}