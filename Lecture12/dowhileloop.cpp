#include<iostream>
using namespace std;
int main(){
	// 3rd type of loop
	// do while
	// for(int i=1;i<=0;i++){
	// 	cout<<i<<" ";
	// }
	// cout<<endl;

	// int i=1;
	// while(i<=0){
	// 	cout<<i<<" ";
	// 	i++;
	// }
	// cout<<endl;


	// do while
	// // be the condition is false or true it runs once atleast
	// infinite loop
	// int i=5;
	// do{
	// 	cout<<i<<endl;//5
	// }
	// while(i>=0);
	int i=5;
	do{
		cout<<i<<endl;//5 4 3 2 1 0 
		i--;
	}
	while(i>=0);


	return 0;
}