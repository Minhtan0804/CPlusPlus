#include<bits/stdc++.h>
using namespace std;

int NiceNumber(string Number){
	int i = 0, j = Number.size()-1;
	while(i <= j){
		if (Number[i] != Number[j]) return 0;
		if (Number[i] % 2 != 0) return 0;
		i++, j--;
	}
	return 1;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		string Number;
		getline(cin >> ws, Number);
		if(NiceNumber(Number)){
			cout << "YES\n";
		}else{
			cout << "NO\n";
		}
	}
	return 0;
}





