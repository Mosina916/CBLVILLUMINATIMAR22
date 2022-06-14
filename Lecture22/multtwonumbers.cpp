#include<iostream>
using namespace std;
int stringtoint(string s,int l){
	// base case
	// ""-->0
	if(l==0){
		return 0;
	}


	// recursive case
	char ch=s[l-1];//'6'-->6
	int digit=ch-'0';//6
	return stringtoint(s,l-1)*10+digit;//"23"-->23*10-->230+6


}

int main(){
	string s;
	cin>>s;//"236"

	// cout<<s+100<<endl;//error
	int l=s.length();//3
	cout<<stringtoint(s,l)<<endl;

	
	return 0;
}