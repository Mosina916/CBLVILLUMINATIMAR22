// ABCDEEDCBA
// ABCDDCBA
// ABCCBA  
// ABBA
// AA

#include<iostream>
using namespace std;
int main(){

	int tr;
	cin>>tr;//5
	// 
	// int row=2
	//4 increasing -->(n+1)-row
	// int ci=1;
	// char pehlacharacter='A';
	// while(ci<=(n+1)-row){
	// 	cout<<pehlacharacter<<" ";//'A' B C D
	// 	pehlacharacter=pehlacharacter+1;//'D'+1-->'E'
	// 	ci=ci+1;//5
	// }
	// // pehlacharacter-->'E'
	// int decpehlacharacter=pehlacharacter-1; //'D'
	// // 4 charater dec -->(n+1)-row

	// int cd=1;
	// while(cd<=(n+1)-row){
	// 	cout<<decpehlacharacter<<" "; //'D' 'C' 'B' 'A'
	// 	decpehlacharacter=decpehlacharacter-1;

	// 	cd=cd+1;//5
	// }

	// cout<endl;

	int row=1;
	while(row<=tr){
		int ci=1;
	char pehlacharacter='A';
	while(ci<=(tr+1)-row){
		cout<<pehlacharacter<<" ";//'A' B C D
		pehlacharacter=pehlacharacter+1;//'D'+1-->'E'
		ci=ci+1;//5
	}
	// pehlacharacter-->'E'
	char decpehlacharacter=pehlacharacter-1; //'D'
	// 4 charater dec -->(n+1)-row

	int cd=1;
	while(cd<=(tr+1)-row){
		cout<<decpehlacharacter<<" "; //'D' 'C' 'B' 'A'
		decpehlacharacter=decpehlacharacter-1;

		cd=cd+1;//5
	}

	cout<<endl;
	row=row+1;


	}

	
	return 0; //exit terminate the progeam

}