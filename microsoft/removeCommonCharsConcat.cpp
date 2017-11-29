#include <unordered_map>
#include <iostream>
#include <string>
#include <cstring>
using namespace std;

string concatUncommon(string s1, string s2){
	string res = "";
	unordered_map<char,int> m;
	int i;
	// putting chars of string s2 in map
	for(i=0;i<s2.size();i++){
		m[s2[i]] = 1;
	}
	//adding uncommon chars of s1 to result
	for(i=0;i<s1.size();i++){
		if(m.find(s1[i])==m.end()){
			res+=s1[i];
		}
		else{
			m[s1[i]] = 2;
		}
	}
	//adding uncommon chars of s2 to res
	for(i=0;i<s2.size();i++){
		if(m[s2[i]]==1){
			res+=s2[i];
		}
	}
	if (res==""){
		res+="-1";
	}
	return res;
}

int main(){
	int t,i;
	cin >> t;
	for(i=0;i<t;i++){
		string s1,s2;
		cin >> s1 >> s2;
		cout << concatUncommon(s1,s2) << "\n";
	}
	
	return 0;
}