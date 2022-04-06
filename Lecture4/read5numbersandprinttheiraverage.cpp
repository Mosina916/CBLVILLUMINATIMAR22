#include<iostream>
using namespace std;
int main(){
	// int a,b,c,d,e;
	// cin>>a>>b>>c>>d>>e;//2 4 5 3 

	// cout<<(a+b+c+d+e)/5<<endl;

	// 2nd approach

	int sum=0;
	int counter=1;


	int no;

	// loop
	while(counter<=5){
		cin>>no;//4

	sum=sum+no;//0+2-->2+4-->6+5-->11+3-->14+1-->15

	counter=counter+1;//3
	}
// explicit type casting
	cout<<"sum is "<<(sum*1.0)/5<<endl;
	







	return 0;
}