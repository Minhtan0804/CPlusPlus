#include<bits/stdc++.h>
using namespace std;

int tongchiadu(int n, long long k){
	int sum = 0;
	if (k == 0 || n == 0) return 0;
	for (int i = 1; i <= n; i++){
		sum += i % k;
	}
	if (k != sum) return 0;
	return 1;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		long long k;
		cin >> n >> k;
		cout << tongchiadu(n,k);
		cout << endl;
	}
	return 0;
}




