#include<iostream>
using namespace std;
void towerofhenio(int n,char src,char helper,char dest){
	// base case
	if(n==0){
		return;
	}

	// recursive case
	towerofhenio(n-1,src,dest,helper);
	cout<<"move disk no "<<n<<" from "<<src<<" to "<<dest<<endl;
	towerofhenio(n-1,helper,src,dest);

}
int main(){
	int n;
	cin>>n;
	towerofhenio(n,'A','B','C');

	


	return 0;
}