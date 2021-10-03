#include<bits/stdc++.h>
using namespace std;

void SameTerminal(string str){
	int count = str.size();
	for (int i = 0; i < str.size()-1; i++){
		for (int j = i+1; j < str.size(); j++){
			if (str[i] == str[j]) count++;
		}
	}
	cout << count;
}


int main(){
	int t;
	cin >> t;
	while(t--){
		string str;
		getline(cin >> ws, str);
		SameTerminal(str);
		cout << endl;
	}
	return 0;
}





