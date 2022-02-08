#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

int main(){
	int H, M;
	double angle;
	
	cin >> H >> M;
	angle = abs(11*M-60*H)/2.0;
	
	if(angle>180){
		angle = 360-angle;}
		
	cout << fixed << setprecision(7) << angle;
return 0; 
}
