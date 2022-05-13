#include<iostream>
using namespace std;
void update(int x){
	x=x+100;//103

	cout<<"value of a inside update function is  "<<x<<endl;//103


}

int main(){
	int a;
	cin>>a; //3 5
	update(a);

	cout<<"value of a inside main is"<<a<<endl;//3


	return 0;

}