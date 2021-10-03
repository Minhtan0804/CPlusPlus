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
		long long n, dem = 0;
		cin >> n;
		n = sqrt(n);
		for(int i = 2; i <= n; i++){
			if(snt(i)){
				dem++;
			}
		}
		cout << dem << endl;
	}
	return 0;
}





