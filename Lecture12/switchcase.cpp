#include<iostream>
using namespace std;
int main(){
	// switch is used instead of if else if ..... else
	// char ch;
	// cin>>ch;

	// switch(ch){
	// 	case 'A':cout<<"Apple"<<endl;
	// 			break;
	// 	case 'B':cout<<"Bat"<<endl;
	// 			break;

	// 	case 'C':cout<<"Cat"<<endl;
	// 			break;
	// 	case 'D':cout<<"Dog"<<endl;
	// 			break;
	// 	default:cout<<"invalid character"<<endl;

	// }


	// int x;
	// cin>>x;

	// switch(x){
	// 	case 1:cout<<"Apple"<<endl;
	// 			break;
	// 	case 2:cout<<"Bat"<<endl;
	// 			break;

	// 	case 3:cout<<"Cat"<<endl;
	// 			break;
	// 	case 4:cout<<"Dog"<<endl;
	// 			break;
	// 	default:cout<<"invalid character"<<endl;

	// }

	// if(ch=='A'){
	// 	cout<<"Apple"<<endl;
	// }
	// else if(ch=='B'){
	// 	cout<<"Bat"<<endl;
	// }

	// else if(ch=='C'){
	// 	cout<<"Cat"<<endl;
	// }
	// else if(ch=='D'){
	// 	cout<<"Dog"<<endl;
	// }
	// else{
	// 	cout<<"invalid character"<<endl;
	// }

	// int x;
	// cin>>x;
	// if(x>10){
	// 	cout<<"9>10"<<endl;
	// }
	// else{
	// 	cout<<"9<10"<<endl;

	// }
	// int x;
	// cin>>x;
	// switch(x){
	// 	case x>10:cout<<"9>10"<<endl;
	// 	break;
	// 	default:cout<<"9<10"<<endl;

	// }


	int age;
	cin>>age;
	if(age>5){
		cout<<"age is greater than 5"<<endl;
	}
	else{
		
			cout<<"age is less than 5"<<endl;
		
	}

	// one line
	// ternary operator
	// condition?statement true:statement false;

	age>5?cout<<"age is greater than 5"<<endl:cout<<"age is less than 5"<<endl;

// nested if else;
	// int age;
	// cin>>age;
	// if(age>5){
	// 	cout<<"age is greater than 5"<<endl;
	// }
	// else{
	// 	if(age<0){
	// 		cout<<"invalid age"<<endl;
	// 	}
	// 	else{
	// 		cout<<"age is less than 5"<<endl;

	// 	}
		
	// }
	age>5?cout<<"age is greater than 5"<<endl:age<0?cout<<"invalid age"<<endl:cout<<"age is less than 5"<<endl;







	return 0;
}