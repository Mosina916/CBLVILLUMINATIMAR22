#include<iostream>
using namespace std;
int sum(int x,int y){
	int s=x+y;
	return s;


}

void sum2(int x,int y){
	int s=x+y;
	cout<<s<<endl;
	


}
int main(){
	int a,b;
	cin>>a>>b; //3 5
	cout<<"sum is : "<<sum(a,b)<<endl;

	sum2(a,b);

	// return 0;

}