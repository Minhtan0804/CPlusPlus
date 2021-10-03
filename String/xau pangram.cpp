#include<bits/stdc++.h>
using namespace std;

int StringPangram(string pangram, int k){
	if (pangram.size() < 26) return 0;
	int c[26] = {0};
	for (int i = 0; i < pangram.size(); i++){
		c[pangram[i] - 'a']++;
	}
	int count = 0;
	for (int i = 0; i < 26; i++){
		if (c[i] == 0) count++;
	}
	if (count > k) return 0;
	return 1;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		string pangram;
		getline(cin >> ws, pangram);
		int k;
		cin >> k;
		if (StringPangram(pangram, k)){
			cout << "1";
		}else{
			cout << "0";
		}
		cout << endl;
	}
	return 0;
}
