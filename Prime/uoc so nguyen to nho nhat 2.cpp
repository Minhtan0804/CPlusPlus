#include<bits/stdc++.h>
using namespace std;

int snt(long n){
	if (n < 2) return 0;
	for (int i = 2; i <= sqrt(n); i++){
		if( n % i == 0) return 0;
	}
	return 1;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		long n;
		cin >> n;
		cout << 1 << " ";
		for (long i = 2; i <= n; i++){
			if(i % 2 == 0){
				cout << 2 << " ";
				continue;
			}
			if (snt(i)){
				cout << i << " ";
				continue;
			}
			for(int j = 2; j <= sqrt(i); j++){
				if (i % j == 0){
					cout << j << " ";
					break;
				}
			}
		}
		cout << endl;
	}
	return 0;
}



