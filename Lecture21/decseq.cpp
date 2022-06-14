#include <iostream>
using namespace std;
void decseq(int n){ //5-->5 4 3 2 1
	// base case
	if(n==0){
		// kuch kaam nahi karna
		return;
	}


	// recursive case
	cout<<n<<" ";//5
	decseq(n-1);

}

void incseq(int n){ //5-->1 2 3 4 5
	// base case
	if(n==0){
		return;
	}

	// recursive case
	incseq(n-1);//
	cout<<n<<" ";//5

	


}
int main(){
	int n;
	cin>>n; //5
	decseq(n);
	cout<<endl;
	incseq(n);





	return 0;
}