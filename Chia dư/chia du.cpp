#include<bits/stdc++.h>
using namespace std;

void chiadu(int a, int m){
	int check = 0;
	for(int i = 0; i < m; i++){
		if (a*i % m == 1){
			check = 1;
			cout << i << endl;
			break;
		}
	}
	if (check == 0){
		cout << "-1\n"; 
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int a, m;
		cin >> a >> m;
		chiadu(a, m);
	}
	return 0;
}




