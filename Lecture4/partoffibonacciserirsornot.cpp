#include<iostream>
using namespace std;
int main(){
	int no;
	cin>>no;//4
	// agar no wo 0 ya 1 aaya 
	if(no==0||no==1){
		cout<<"yes part of fibonacci series"<<endl;

	}
	else if(no<0){//agar negative number aaya 
		cout<<"not part of fibonacci series"<<endl;

	}
	else{
		int a=0;//first fibonacci number
		int b=1;//2nd fibo number

// loop
		int c=a+b;//0+1-->1+1-->2-->1+2-->3
		while(c<=no){//3<=3


		if(c==no){
			cout<<"yes part of fibonacci series"<<endl;
			return 0;

		}
		// aage ka number find karna hai
		a=b;
		b=c;
		c=a+b;//0+1-->1+1-->2-->1+2-->3
// jaise hi 31 pe aaya it will go back to line 19 pe

		}
		cout<<"not part of fibonacci series"<<endl;
		

	}
	







	return 0;
}