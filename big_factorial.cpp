#include<iostream>
using namespace std;

int main() {
unsigned long long int n;
unsigned long long int fact=1;
cin>>n;
	
if(n>20)
	{cout<< 0;}
	
else{
	for(int i = 1; i<=n; i++)
		{fact = fact*i;}
		
	int u=fact%10000;
	cout << u;}
return 0;
}
