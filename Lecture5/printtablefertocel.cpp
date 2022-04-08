#include<iostream>
using namespace std;

int main(){
	// int start=0;
	// int end=300;
	// int step=20;


	int start,end,step;
	cin>>start>>end>>step;


	int f=start;//0

// loop
	while(f<=end){
		// float c=(5*1.0/9)*(f-32);//17.374 //int/int-->int 5/9--?0.2563

		int c=(1.0*5/9)*(f-32);//17.374 //float/int-->float 5/9--?0.2563
// 
		// int c=(5/(9*1.0))*(f-32);//17.374 //int/int-->int 5/9--?0.2563
		// int c=(5*(f-32))/9;//17.374 //int/int-->int 5/9--?0.2563

	cout<<f<<"         "<<c<<endl;
	f=f+step;//0+20-->20+20-->40-->280+20-->300+20-->320
	// back to line 12 

	}

	// int x=80-->80.0
	// float y=78.9;-->78

	// float z=80;
	// int u=78.9;data loss 


	// float z=80;


	// float b=3/2;1




	





	
	return 0;

}