#include<bits/stdc++.h>
using namespace std;

void tongchiadu(int n, long long k){
	int sum = 0;
	for(int i = 1; i <= n; i++){
		sum += i % k;
	}
	cout << sum <<endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		long long k;
		cin >> n >> k;
		tongchiadu(n, k);
	}
	return 0;
}




