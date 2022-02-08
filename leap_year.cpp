#include <iostream>
#include <cstdio>
using namespace std;

int main(){
	int year;
	cin >> year;
	
	if(year%4==0 && year%400!=0){
		printf("Yes");}
	else{
		printf("No");}
	
return 0; 
}
