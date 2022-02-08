#include <iostream>
using namespace std; 

int main() 
{ 
	string S, RS;
    cin >> S;
    
    for(int x=S.length()-1; x>=0; x--)
    {
    	RS = RS+S[x];
    }
    
    if(S==RS)
    	{cout << "Yes";}
    else
    	{cout << "No";}
return 0;
}
