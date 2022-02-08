#include <iostream>
using namespace std;

int main(){
	int N;
	int n1=1, n2=1, n3;
	
	cin	>> N;
	for(int i=3;i<=N;i++){
		n3 = n1+n2;
		n1 = n2;
		n2 = n3;
	}
	if(N<=2)
		{n3=1;}
	cout << n3;
return 0; 
}
