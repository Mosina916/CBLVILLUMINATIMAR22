#include<iostream>
using namespace std;
int fact(int n){
	// 5!=5*4*3*2*1;
	int ans=1;

	for(int i=1;i<=n;i++){
		ans=ans*i;//1*2-->2*3-->6*4-->24*5-->120

	}
	// cout<<"factorial is "<<ans<<endl;
	return ans;
	

}

int main(){
	int n;
	cin>>n;//5
	cout<<"factorial is "<<fact(n)<<endl;
	// cin>>n;
	// cout<<"factorial is "<<fact(n)<<endl;
	
	return 0;

}