#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n; //3


	int ans=0;
	int no;
	int counter=1;

// loop
	while(counter<=n){
		cin>>no;//5
		// ans=ans^no;//0^6-->6^6-->0^3-->3^5
		ans=ans^no;//0^5-->5^7-->2^5-->7
		counter=counter+1;


	}

	cout<<ans<<endl;
	





	return 0;
}