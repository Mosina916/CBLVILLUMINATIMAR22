#include<iostream>
using namespace std;
string moveallxatend(string s){
	// base case
	if(s.length()==0){
		return "";

	}
	// recursive case
	char ch=s[0];
	// char ch=s.substr(0,1)
	string recnejoansdiya=moveallxatend(s.substr(1));//"bxcxxl"-->"bclxxx"

	if(ch=='x'){
		// last pe lena hai
		return recnejoansdiya+ch;



	}
	else{
		// aage rakhna hai
		return ch+recnejoansdiya;

	}
}
int main(){
	string s;
	cin>>s;
	cout<<moveallxatend(s)<<endl;
	


	return 0;
}