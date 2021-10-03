#include<bits/stdc++.h>
using namespace std;

void CountOfWords(string str){
	int count = 0, size = str.size();
	for (int i = 0; i < size-1; i++){
		if (isalpha(str[i]) && !isalpha(str[i+1])){
			count++;
		}
	}
	if (isalpha(str[size-1])){
		count++;
	}
	cout << count << endl;
}

int main(){
	int t;
//	scanf("%d\n", &t); // làm ri cx dc
	cin >> t;
	while(t--){
		string str;
		getline(cin >> ws, str); // day ms di hoi ve
//		getline(cin, str);
		CountOfWords(str);
	}
	return 0;
}
