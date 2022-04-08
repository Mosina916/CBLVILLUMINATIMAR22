#include<iostream>
using namespace std;
int main(){
	int no;
	cin>>no;//432-->reverse-->234

	int ans=0;

// loop
	while(no>0){
		ans=ans*10+no%10;//0*10+2-->2*10+3-->23*10+4-->234
		no=no/10;//432/10-->43/10-->4/10-->0


	}

	cout<<"reverse no is "<<ans<<endl;


	


	return 0;

}