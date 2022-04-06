#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;//9 6
	int sum=0;

	int i=2;

// loop
	while(i<=n){//8<=6
		sum=sum+i;//0+2-->2+4-->6+6-->12+8-->20
		i=i+2;//4+2-->6+2-->8+2-->10

	}
	cout<<"sum of even numbers is "<<sum<<endl;
	






	return 0;
}