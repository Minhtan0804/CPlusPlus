#include<bits/stdc++.h>
using namespace std;

int FullNumber(string str){
	if (str[0] == '0') return -1;
	int c[10] = {0};
	for (int i = 0; i < str.size(); i++){
		if (isdigit(str[i])){
			c[str[i]-'0']++;
		}else{
			return -1;
		}
	}
	for (int i = 0; i < 10; i++){
		if (c[i] == 0) return 0;
	}
	return 1;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		string Number;
		getline(cin >> ws, Number);
		if (FullNumber(Number) == -1){
			cout << "INVALID";
		}else if (FullNumber(Number) == 0){
			cout << "NO";
		}else{
			cout << "YES";
		}
		cout << endl;
	}
	return 0;
}





