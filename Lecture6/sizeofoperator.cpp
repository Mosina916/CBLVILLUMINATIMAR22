#include <iostream>
using namespace std;
int main(){
	// int -->4 bytes
	// float-->4 bytes
	// double -->8 
	// char -->1 
	// bool -->1

// pass datatype
	// cout<<"size of int "<<sizeof(int)<<endl; //4
	// cout<<"size of float "<<sizeof(float)<<endl; //4
	// cout<<"size of double "<<sizeof(double)<<endl; //8
	// cout<<"size of char "<<sizeof(char)<<endl; //1
	// cout<<"size of bool "<<sizeof(bool)<<endl; //1


	int x=10;

	float F=78.9;
	double d=7.34;
	
	char ch='T';

	// pass bucket name

	// cout<<"size of int "<<sizeof(x)<<endl; //4
	// cout<<"size of float "<<sizeof(F)<<endl; //4

	// cout<<"size of char "<<sizeof(ch)<<endl; //1


	// value pass

	cout<<"size of int "<<sizeof(6)<<endl; //4
	cout<<"size of float "<<sizeof(7.8)<<endl; //8
	cout<<"size of double "<<sizeof(5.6578)<<endl; //8
	cout<<"size of char "<<sizeof('E')<<endl; //1
	cout<<"size of bool "<<sizeof(true)<<endl; //1










	return 0;
}