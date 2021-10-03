#include<bits/stdc++.h>
using namespace std;

void uocsnt(long long n){
	long long k = n;
	while(n % 2 == 0){
		cout << 2 << " ";
		n /= 2;
	}
	for(int i = 3; i <= sqrt(k); i+=2){
		while(n % i == 0){
			cout << i << " ";
			n /= i;
		}
	}
	if (n > 2) cout << n;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		long long n;
		cin >> n;
		uocsnt(n);
		cout << endl;
	}
	return 0;
}



