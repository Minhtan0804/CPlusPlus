#include<bits/stdc++.h>
using namespace std;

int snt(int n){
	if (n < 2) return 0;
	for (int i = 2; i <= sqrt(n); i++){
		if( n % i == 0) return 0;
	}
	return 1;
}

void lke(int k){
	int a[100000] = {0}, n= 0;
	for (int i = 2; i <= k/2 + 1; i++){
		if(snt(i) && snt(k-i)){
			cout << i << " " << k-i << endl;
			break;
		}
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		lke(n);
	}
	return 0;
}



