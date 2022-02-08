#include <iostream>
#include <cctype>
using namespace std;

int main(){
	string a, pw;
	
	cin >> a;
	int len = a.length();
	for(int x=0; x<=len; x++){
		if(x==0){
			a[0] = toupper(a[0]);
			pw = pw+a[0];
			continue;}
		else if(x==len){
			pw = pw+'.';
			break;}
		switch(a[x]){
			case 's' : pw = pw+'$';break;
			case 'i' : pw = pw+'!';break;
			case 'o' : pw = pw+"()";break;
			default : pw = pw+a[x];}
	}
	cout << pw;
return 0; 
}
