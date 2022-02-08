#include <iostream>
using namespace std;

int main(){
	int A;
	cin >> A;
	
	for(int x=1; x<=A; x++)
	{
		if(A%x == 0)
		{
			cout << x << endl;
		}
	}
return 0; 
}
