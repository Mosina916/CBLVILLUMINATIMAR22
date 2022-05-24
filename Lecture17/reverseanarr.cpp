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


void reverse(char arr[1000]){
	int i=0;
	int j=length(arr)-1;

	while(i<j){
		swap(arr[i],arr[j]);
		i++;
		j--;

	}
	


}

int main(){
	char arr[1000];
	cin.getline(arr,1000);//"coding"

	cout<<"Before reverse "<<arr<<endl;

	reverse(arr);

	cout<<"after reverse "<<arr<<endl;

	


	


	return 0;
}