#include<iostream>
using namespace std;

int main(){
	char ch;
	cin>>ch;//'I'
	// agar ye ch hai 'A' se 'Z'-->UPPERCASE

		// agar ye ch hai 'a' se 'z'-->lowercase

		// agar ye ch koi aur char hai-->invalid character

	// if(ch>='A'&&ch<='Z'){ //73>=65 &&73<=90 //implicit type casting 

	// 	cout<<"UPPERCASE"<<endl;

	// }
	// else if(ch>='a'&&ch<='z'){ //
	// 	cout<<"lowercase"<<endl;

	// }
	// else{
	// 	cout<<"invalid character"<<endl;

	// }


	// 2nd way 
	// if(ch>=65&&ch<=90){ //73>=65 &&73<=90 //implicit type casting 

	// 	cout<<"UPPERCASE"<<endl;

	// }
	// else if(ch>=97&&ch<=122){ //
	// 	cout<<"lowercase"<<endl;

	// }
	// else{
	// 	cout<<"invalid character"<<endl;

	// }


	// 3rd way

	if(isupper(ch)){ //73>=65 &&73<=90 //implicit type casting 

		cout<<"UPPERCASE"<<endl;

	}
	else if(islower(ch)){ //
		cout<<"lowercase"<<endl;

	}
	else{
		cout<<"invalid character"<<endl;

	}



	




	
	return 0;

}