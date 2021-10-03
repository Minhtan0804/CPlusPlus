#include<bits/stdc++.h>
using namespace std;

int snt(int n){
	if (n < 2) return 0;
	for (int i = 2; i <= sqrt(n); i++){
		if( n % i == 0) return 0;
	}
	return 1;
}

int main(){
	int m, n;
	cin >> m >> n;
	if (m > n){
		int tmp = m;
		m = n;
		n = tmp;
	}
	for (int i = m; i <= n; i++){
		if(snt(i)){
			cout << i << " ";
		}
	}
	return 0;
}



