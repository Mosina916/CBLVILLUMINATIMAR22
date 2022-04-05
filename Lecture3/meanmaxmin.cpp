// isprimeornot.cpp
#include<iostream>
using namespace std;
int main(){
	int tn;
	cin>>tn; //4

	int no;
	cin>>no;//1

	int sum=no; //1
	int maximum=no; //1
	int minimum=no; //1

int counter=1;
 // loop
while(counter<=tn-1){
	// sum
	cin>>no;//0
	sum=sum+no;//1+4-->5+9-->14+0-->14

	// maximum
	if(no>maximum){
		maximum=no; //9

	}

	// minimum
	if(no<minimum){//0<1
		minimum=no; //0

	}

	counter=counter+1;//4

}


	cout<<"mean is "<<(sum*1.0)/tn<<endl;
	cout<<"maximum is "<<maximum<<endl;
	cout<<"minimum is "<<minimum<<endl;












	return 0;
}