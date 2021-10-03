#include<bits/stdc++.h>
using namespace std;

void encode(string str){
	int count = 0;
	for (int i = 0; i < str.size(); i++){
		while(str[i] == str[i+1]){
			count++;
			i++;
		}
		if (str[i] != str[i+1]){
			cout << str[i] << count+1;
			count = 0;
		}
	}
	cout << endl;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		string str;
		getline(cin >> ws, str);
		encode(str);
	}
	return 0;
}
