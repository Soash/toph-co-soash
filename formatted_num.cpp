#include <iostream>
#include <algorithm>
using namespace std; 

string thousandSeparator(int n) 
{ 

    string ans = "";
    string num = to_string(n); 

    int count = 0; 
    for(int i=num.size()-1; i >= 0; i--){ 

        count++; 
		ans.push_back(num[i]); 
        if (count == 3){ 
	 		ans.push_back(','); 
			count = 0; 
		} 
	} 
	reverse(ans.begin(), ans.end());
    
    if (ans.size() % 4 == 0){ 
        ans.erase(ans.begin());}
	return ans; 
} 

int main() 
{ 
	int N; 
	cin >> N;
    string fm_num = thousandSeparator(N); 

    cout << fm_num << endl; 
}
