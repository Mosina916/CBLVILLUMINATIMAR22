// isprimeornot.cpp
#include<iostream>
using namespace std;
int main(){

	int tr;
	cin>>tr;//5

	int row=1;
	while(row<=tr){
		//  row no 3 pe mai kaam kar rahi hogi
// ==================================================================
	// spaces
	int counter=1;
	while(counter<=tr-row){ //5-3-->2-->1<=2
		cout<<"  ";
		counter=counter+1;//3

	}

	// increasing

	int counterinc=1;//ye batayega kitne numbers increasing mai print ho rahe hai
	int startincno=row;//3 ye no se start hoga inc mai print hona
	while(counterinc<=row){
		// task
		cout<<startincno<<" ";
		startincno=startincno+1;//5


		counterinc=counterinc+1; //4

	}


	// decreasing

	int counterdec=1;//ye batayega kitne numbers decreasing mai print ho rahe hai
	int startdecpr=2*row-2;
	while(counterdec<=row-1){
		// task
		cout<<startdecpr<<" "; //3
		startdecpr=startdecpr-1; //2



		counterdec=counterdec+1; //3

	}

	cout<<endl;

	// ==================================================================




			row=row+1;
	}


	


	



	return 0;
}