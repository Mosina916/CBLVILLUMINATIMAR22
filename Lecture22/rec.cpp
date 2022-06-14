#include<iostream>
using namespace std;
string arr[]={"Zero","One","Two","Three","Four","Five","Six","Seven","Eight","Nine"};
// void printreverseofnoinsentenceform(int no){
// 	// base case
// 	if(no==0){
// 		return;//wapas aajao

// 	}

// 	// recursive case
// 	int ld=no%10;//2048%10-->8-->Eight
// 	cout<<arr[ld]<<" ";//
// 	printreverseofnoinsentenceform(no/10);




// }

void printofnoinsentenceform(int no){
	// base case
	if(no==0){
		return;//wapas aajao

	}

	// recursive case
	printofnoinsentenceform(no/10);//2048/10-->204
	int ld=no%10;//2048%10-->8-->Eight
	cout<<arr[ld]<<" ";//
	

}
int main(){
	int no;
	cin>>no;//2048

	// 
	// printreverseofnoinsentenceform(no);

	printofnoinsentenceform(no);

	cout<<endl;







	return 0;
}