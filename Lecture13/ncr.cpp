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
int ncr(int n,int r){
	int fans=fact(n)/(fact(r)*fact(n-r));
	return fans;

}

int main(){
	int n,r;
	cin>>n>>r;//5 2
	cout<<"ncr is :"<<ncr(n,r)<<endl;
	
	return 0;//return to the console //terminate

}