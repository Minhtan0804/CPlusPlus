#include<bits/stdc++.h>
using namespace std;

void uocmax(long long n){
	long long max = 0;
	for(int i = 2; i <= sqrt(n); i++){
		while(n % i == 0){
			max = i;
			n /= i;
		}
	}
	if (n > 2) max = n;
	cout << max;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		long long n;
		cin >> n;
		uocmax(n);
		cout << endl;
	}
	return 0;
}



