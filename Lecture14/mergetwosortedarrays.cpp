#include<iostream>
using namespace std;

int main(){
	int a[7]={3,4,5};
	int n=3;
	int b[4]={1,2,6,7};
	int m=4;

	int i=n-1;//2
	int j=m-1;
	int k=n+m-1;//6

// loop
	while(i>=0&&j>=0){
		if(a[i]>b[j]){//5>7 5>6 5>2 4>2 3>2
		a[k]=a[i];
		i--;
		k--;

	}
	else{
		a[k]=b[j];
		j--;
		k--;

	}

	}


// loop
	while(j>=0){
		a[k]=b[j];
		j--;
		k--;

	}


	for (int i = 0; i <m+n; ++i)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;

	
	



	

	return 0;
	
}