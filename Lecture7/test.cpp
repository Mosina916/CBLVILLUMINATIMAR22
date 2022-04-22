#include<iostream>
using namespace std;
int main(){

// 101
// 1*2^2+1-->5 
	int times;
	cin>>times;//4
	int counter=0;


while(counter<times){
	int no;
	cin>>no;//101
	int ans=0;

	int p=1;

// loop
	while(no>0){
		int ld=no%10; //10%10-->1%10-->1

		ans=ans+ld*p; //0+1*1-->1+0*2-->1+1*4-->5
		no=no/10;//101/10-->10/10-->1/10-->0
		p=p*2;//1*2-->2*2-->4*2


	}

	cout<<ans<<endl;
	counter=counter+1;//5
	

}
	




	return 0;

}