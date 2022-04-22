#include <iostream>
using namespace std;

int main(){
	// char ch;
	// int cou=0;

	// cin>>ch;//'A' //pehla caracter le raha hoga 
	// // loop
	// while(ch!='$'){
	
	// 	cou=cou+1;//3
	// cin>>ch;//'g' 'h' $'


	// }

	// cout<<"count is : "<<cou<<endl;

	// cin ignores the white spaces ' ','\t','\n'


	// i don't want to ignore the space
	// use cin.get(); instead of cin


	char ch;
	int cou=0;

	ch=cin.get();//'A' //pehla caracter le raha hoga 
	// loop
	while(ch!='$'){
	
		cou=cou+1;//3
	ch=cin.get();//'g' 'h' $'


	}

	cout<<"count is : "<<cou<<endl;



	










	


	return 0;
}