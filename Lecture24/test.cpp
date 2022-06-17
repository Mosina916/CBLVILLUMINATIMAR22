#include <iostream>
using namespace std;
int cou=0;
void subsequences(char*input,int i,char *outp,int j){
	// base case
	if(input[i]=='\0'){
		outp[j]='\0';
		cout<<outp<<endl;
		cou++;
		return;
	}


	// recursive case
	// without a 
	subsequences(input,i+1,outp,j);//bc




	// with 
	outp[j]=input[i];
	subsequences(input,i+1,outp,j+1);





}
int main(){
	// string s;
	// cin>>s;
	char input[100];
	char outp[100];

	cin>>input;//"abc"
	subsequences(input,0,outp,0);

	cout<<"total subsequences are : "<<cou<<endl;



	return 0;
}