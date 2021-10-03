#include<bits/stdc++.h>
using namespace std;

void Solution(string str){
	int c[26]= {0};
	for (int i = 0; i < str.size(); i++){
		c[str[i] - 'A']++;
	}
	for (int i = 0; i < 26; i++){
		while(c[i]--){
			cout << (char)(i+'A');
		}
	}
	int sum = 0;
	for (int i = 0; i < str.size(); i++){
		if (str[i] >= '0' && str[i] <= '9'){
			sum += str[i] - '0';
		}
	}
	cout << sum;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		string str;
		getline(cin >> ws, str);
		Solution(str);
		cout << endl;
	}
	return 0;
}
