#include<iostream>
using namespace std;

// 1
// 01
// 101
// 0101
// 10101
int main(){
	int tr;
	cin>>tr;//5

	int row=1;


// loop
	while(row<=tr){
		
	// is row even or odd 
	if(row%2==0){
		// row even hai mtlb 0 se start karo
		int counter=1;
		int vp=0;
		while(counter<=row){
			cout<<vp<<" ";//0  1 0 1
			counter=counter+1;//4
			vp=1-vp;//1-0-->1-1-->1


		}
		cout<<endl;
		row=row+1;


	}
	else{
		// row odd hai mtlb 1 se start hoga
		int counter=1;
		int vp=1;//pehli value 1 

// loop
		while(counter<=row){//4<=3
			cout<<vp<<" ";
		counter=counter+1;//4
		vp=1-vp;//1-1-->0-->1-0-->1
// back to line 25

		}
		cout<<endl;
		row=row+1;//4

	
	}
	// back to line no 15

	}











	



	return 0;

}