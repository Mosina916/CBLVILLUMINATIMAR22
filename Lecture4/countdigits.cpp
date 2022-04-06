
#include<iostream>
using namespace std;
int main(){
	int no;
	cin>>no;//5433231
	int target;
	cin>>target;//3;
	int counttarget=0;

	while(no>0){
		int digit=no%10;//5433231%10-->1  543323%10-->3 54332%10-->2 5433%10-->3 543%10-->3
		if(digit==target){
			counttarget=counttarget+1;//3


		}
		no=no/10;//5433231/10-->543323/10-->54332 5433 5-->0

		
	


	}


	cout<<counttarget<<endl;



	

	return 0;
}