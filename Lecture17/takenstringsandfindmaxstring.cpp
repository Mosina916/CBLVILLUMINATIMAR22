#include<iostream>
using namespace std;
int length(char arr[]){
	int count=0;
	int i=0;
// loop
	while(arr[i]!='\0'){
		count++;//5
		i++;//5	

	}

	return count;
}


void copystringbtoa(char a[100],char b[100]){
	int i=0;
	int j=0;

// loop
	while(j<=length(b)){
		a[i]=b[j];
		i++;
		j++;


	}

	
}
int main(){
	int n,maxlen=0;
	cin>>n;//3
	cin.ignore();
	char maxstring[1000];

	char arr[1000];
	int count=1;
	// loop
	while(count<=n){
		cin.getline(arr,1000);//"world"
	int len=length(arr);//5
	if(len>maxlen){//5>8
		maxlen=len;//8
		copystringbtoa(maxstring,arr);//"elephant"


	}

	count++;//4

	}

	cout<<"max length of string is "<<maxlen<<endl;
	cout<<"max string value is "<<maxstring<<endl;
	






	


	return 0;
}