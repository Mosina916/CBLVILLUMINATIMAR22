#include<iostream>
using namespace std;
int main(){
	// int x=10;
	// float f=60.90;
	// double d=68.232433;
// 	cout<<"value of x is "<<x<<endl;//10
// 	cout<<"value of f is "<<f<<endl;//60.90
// 	cout<<"value of d is "<<d<<endl;//68.232433

// // /&-->it igives address of the bucket
// 	cout<<"value of &x is "<<&x<<endl;// 0x7ffee30b4938
// 	cout<<"value of &f is "<<&f<<endl;//
// 	cout<<"value of &d is "<<&d<<endl;//

// 	cout<<"value of sizeof(x) is "<<sizeof(x)<<endl;//
// 	cout<<"value of sizeof(f) is "<<sizeof(f)<<endl;//
// 	cout<<"value of sizeof(d) is "<<sizeof(d)<<endl;//

// 	cout<<"value of sizeof(&x) is "<<sizeof(&x)<<endl;//
// 	cout<<"value of sizeof(&f) is "<<sizeof(&f)<<endl;//
// 	cout<<"value of sizeof(&d) is "<<sizeof(&d)<<endl;//


	// to store addresses we use pointers
	// syntax
	// datatype* namesof thebucket;
	// datatype *namesof thebucket;

	int x=10;
	float f=60.90;
	double d=68.232433;
	int*xptr=&x;
	// cout<<xptr<<endl;
	float*fptr=&f;
	// cout<<fptr<<endl;
	double*dptr=&d;
	// cout<<dptr<<endl;


	// cout<<xptr<<" "<<endl;//0x7ffee9403938 

	// // cout<<fptr<<" "<<&f<<endl;
	// // cout<<dptr<<" "<<&d<<endl;

	// cout<<xptr+1<<" "<<endl;//0x7ffee940393c 

	// cout<<xptr+2<<" "<<endl;//0x7ffee9403940 

	 // cout<<dptr<<" "<<endl;//28
	 //  cout<<dptr+1<<endl;//30
	 //   cout<<dptr+2<<" "<<endl;//38

	   // for char type

	char ch='Y';
	cout<<ch<<endl;//'Y'
	cout<<&ch<<endl;//Y(?t??-->value at the bucket till we get null


	// characters they work differently


	// fooling of compiler
	// cout<<(datatype*)&ch<<endl;

	// cout<<(int*)&ch<<endl;
	// cout<<(float*)&ch<<endl;
	// cout<<(double*)&ch<<endl;

	cout<<(void*)&ch<<endl;





	





















	return 0;
}