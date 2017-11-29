#include <bits/stdc++.h>

using namespace std;

string sum(string s1,string s2){
     return s1+s2;
}

int main(){
	int t,i;
	string s1,s2;
	cin >> t;

	for(i=0;i<t;i++){
		cin >> s1 >> s2;
		cout << sum(s1,s2) << "\n";
	}
	return 0;
}

