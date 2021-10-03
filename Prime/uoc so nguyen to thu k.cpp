#include<bits/stdc++.h>
using namespace std;

int sntk(int n, int k){
	if (n < 2) return -1;
	int dem = 0;
	for (int i = 2; i <= sqrt(n); i++){
		while(n % i == 0){
			dem++;
			if (dem == k){
				return i;
			}
			n /= i;
		}
	}
	if (n > 2){
		dem++;
		if (dem == k){
			return n;
		}
	}
	return -1;	
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, k;
		cin >> n >> k;
		int x = sntk(n,k);
		cout << x << endl;
	}
	return 0;
}



