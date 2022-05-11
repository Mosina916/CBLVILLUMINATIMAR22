#include<iostream>
using namespace std;
// returntype functionname(){

// }
// no return type and no arguments
void p4(){//function decleartion
	// task
	// function definition
	cout<<"humpty dumpty sat on a wall"<<endl;
	cout<<"i am a teacher"<<endl;
	cout<<"Hello world"<<endl;
	cout<<"Hi how are you"<<endl;
	// tumhare function k ander return keyword present na ho tou return tyep
	// is void
	// return 

}
// f1();
// f2(){
// 	f1();
// }

// f1(){

// }

// with return but no arguments

// no return but with arguments
void addition(int x,float y,int z,int u);

// with return and with argumets
float subtraction(int x,float y){
	float sub=x-y;
	addition(4,5.5,3,2);
	return sub;


}
void addition( intx,float y,int z,int u){//arguments/parameters
	float add=x+y+z+u;
	cout<<"addition is "<<add<<endl;

}

bool israining(){
	return true;
}


// forward decleartion
int mult();

int main(){//start of program main  act as boss
	// task 1

	// int a=3,b=4,c=2;
	// cout<<"multipilcation  is : "<<a*b*c<<endl;

	// // task 2
	// int d=7;
	// cout<<"addition  is : "<<a+b+c+d<<endl;


	// task 3;

	// cout<<"humpty dumpty sat on a wall"<<endl;
	// cout<<"i am a teacher"<<endl;
	// cout<<"Hello world"<<endl;
	// cout<<"Hi how are you"<<endl;

	// call
	// functionname();
	p4();//function call /function invoking
	p4();
	p4();
	p4();

	cout<<mult()<<endl;


	addition(4,2.2,9,1);

	subtraction(40,3.3);

	if(israining()){
		cout<<"yes raining "<<endl;

	}
	else{
		cout<<"Not raining "<<endl;

	}



	// cout<<"humpty dumpty sat on a wall"<<endl;
	// cout<<"i am a teacher"<<endl;
	// cout<<"Hello world"<<endl;
	// cout<<"Hi how are you"<<endl;

	// cout<<"humpty dumpty sat on a wall"<<endl;
	// cout<<"i am a teacher"<<endl;
	// cout<<"Hello world"<<endl;
	// cout<<"Hi how are you"<<endl;

	// cout<<"humpty dumpty sat on a wall"<<endl;
	// cout<<"i am a teacher"<<endl;
	// cout<<"Hello world"<<endl;
	// cout<<"Hi how are you"<<endl;




	// task 4
	// cout<<"division  is : "<<b/c<<endl;








	return 0;
}


int mult(){
	// task
	int a=3,b=4,c=2;
	int m=a*b*c;
	// cout<<"multipilcation  is : "<<m<<endl;//24
	return m;

}
