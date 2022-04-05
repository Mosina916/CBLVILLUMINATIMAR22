// isprimeornot.cpp
#include<iostream>
using namespace std;
int main(){
	int tn;
	cin>>tn; //4
	int sum=0;
	int maximum=INT_MIN; //
	int minimum=INT_MAX;


int counter=1;
int no;
 // loop
while(counter<=tn){ //2<=2
	// sum
	cin>>no;//1
	sum=sum+no;//1

	// maximum
	if(no>maximum){ //
		maximum=no; //1

	}

	// minimum
	if(no<minimum){//
		minimum=no; //1

	}

	counter=counter+1;//2

}


	cout<<"mean is "<<(sum*1.0)/tn<<endl;
	cout<<"maximum is "<<maximum<<endl;
	cout<<"minimum is "<<minimum<<endl;












	return 0;
}