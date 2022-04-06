#include<iostream>
using namespace std;
int main(){
	int no;
	cin>>no;//4372
	int sum=0;
	// to extract 2 
	// no%10-->4372%10-->2
	while(no>0){
		sum=sum+no%10;//0+2-->2+437%10-->2+7-->9+43%10-->3+9-->12+4%10-->4+12-->16
	// to remove last digit 2
	// 4372/10-->437
	no=no/10;//437/10-->43/10-->4/10--0


	}

	cout<<"sum of digits is "<<sum<<endl;
	



	return 0;
}