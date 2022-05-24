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
bool ispermuattionornot(char *a,char *b){
	if(length(a)!=length(b)){
		return false;
	}
	else{
		int arrcountastringchar[26]={0};

		int arrcountbstringchar[26]={0};
		int i=0;

// loop
		while(a[i]!='\0'){
			char ch=a[i];//'b'
			int indx=ch-'a';//'a'-'a'//97-97-->0 'b'-'a'-->98-97-->1
			arrcountastringchar[indx]++;
			i++;

		}

		int j=0;
		while(b[j]!='\0'){
			char ch=b[j];//'a'
			int indx=ch-'a';//'a'-'a'//97-97-->0 'b'-'a'-->98-97-->1
			arrcountbstringchar[indx]++;
			j++;

		}

		for(int k=0;k<=25;k++){
			if(arrcountastringchar[k]!=arrcountbstringchar[k]){
				return false;
			}


		}
		return true;

	}


}


// bool permutationusingxor(char a[1000],char b[1000]){
// 	int ans=0;
// 	int i=0;
// 	if(length(a)!=length(b)){
// 		return false;
// 	}
// 	else{
// 		// loop
// 	while(a[i]!='\0'){
// 		ans=a[i]^ans;//97^99
// 	i++;

// 	}
// 	int j=0;
// 	while(b[j]!='\0'){
// 		ans=b[j]^ans;//
// 	j++;

// 	}

// 	}



// 	if(ans==0){
// 		return true;
// 	}
// 	// else{
// 		return false;
// 	// }



	


// }

int main(){
	char a[1000];
	char b[1000];
	cin.getline(a,1000);
	cin.getline(b,1000);

	if(ispermuattionornot(a,b)){
		cout<<"yes permutation "<<endl;
	}
	else{
		cout<<"No Not permutation "<<endl;
	}

// will not work
	// if(permutationusingxor(a,b)){
	// 	cout<<"yes permutation "<<endl;
	// }
	// else{
	// 	cout<<"No Not permutation "<<endl;
	// }

	

	


	return 0;
}