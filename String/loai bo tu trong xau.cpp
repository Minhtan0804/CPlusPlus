#include<bits/stdc++.h>
using namespace std;

int main(){
	string name1, name2;
	getline(cin, name1);
	getline(cin, name2);
	int k = name1.find(name2);
	for (int i = 0; i < name1.length(); i++){
		if (i == k){
			i += name2.length();
		}else{
			cout << name1[i];
		}
	}
	return 0;
}





