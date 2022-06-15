#include<iostream>
using namespace std;
string replaceallpi(string s){
	// base case
	if(s.length()==0){
		return "";
	}

	// recursive case
	string chotaans=s.substr(0,2);//"xp"
	if(chotaans=="pi"){
		return "3.14"+replaceallpi(s.substr(2));
	}
	else{
		return s[0]+replaceallpi(s.substr(1));

	}	
}
int main(){
	string s;
	cin>>s;
	cout<<replaceallpi(s)<<endl;
	


	return 0;
}