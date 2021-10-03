#include<bits/stdc++.h>
using namespace std;

void CharNotRepeat(string str){
	int c[26] = {0};
	for (int i = 0; i < str.size(); i++){
		c[str[i] - 'A']++;
	}
	for (int i = 0; i < str.size(); i++){
		if(c[str[i] - 'A']== 1) {
			cout << str[i];
		}
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		string str;
		getline(cin >> ws, str);
		CharNotRepeat(str);
		cout << endl;
	}
	return 0;
}






