#include<iostream>
using namespace std;

int main(){
	int a;
	char arr[100];
	cin>>a;
	cin.ignore();//it ignores a single charater
	// cin.ignore();
	cin.getline(arr,100);
	cout<<a<<endl;
	cout<<arr<<endl;
	

	

	return 0;
}