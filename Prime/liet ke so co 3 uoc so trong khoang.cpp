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
	int t;
	cin >> t;
	while(t--){
		long long m, n, dem = 0;
		cin >> m >> n;
		int k = sqrt(m);
		if (k * k != m){
			k++;
		}
		n = sqrt(n);
		for(int i = k; i <= n; i++){
			if(snt(i)){
				dem++;
			}
		}
		cout << dem << endl;
	}
	return 0;
}





