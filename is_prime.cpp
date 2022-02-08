#include<iostream>
using namespace std;
int main(){
	int N;
	cin >> N;

	if(N==1){
		cout << "No";
		exit(0);
	}	
	for(int i=2; i<N; i++){
		if(N%i==0){
			cout << "No";
			exit(0);}
	}

	cout << "Yes";
return 0; 
}
