#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	string num1, num2;
	
	cin >> num1 >> num2;
	reverse(num1.begin(), num1.end());
    reverse(num2.begin(), num2.end());
    
    
   // cout << num1 <<"__"<< num2<< endl;
    int len=num1.length();
    for(int i=0; i<len; i++){
		//cout<<num1[i]<<"+"<<num2[i]<<"=";
    	
    	int n1 = num1[i]-'0';
    	int n2 = num2[i]-'0';
   		if((n1 + n2)>9){
   			cout << "Yes";
    		exit(0);}
    	
    	//cout << endl;
   	}
   	cout << "No";
     
return 0;	
}
