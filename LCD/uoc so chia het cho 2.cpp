#include<bits/stdc++.h>
using namespace std;

int demuoc(long n){
	if (n % 2 != 0){
		return 0;
	}
	int dem = 0;
	for (int i = 1; i <= sqrt(n); i++){
		if (n % i == 0 ){
			if (i %2 == 0){
				dem++;	
			}
			int k = n/i;
			if (k != i && k % 2 == 0){
				dem++;
			}
		}
	}
	return dem;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		long n;
		cin >> n;
		cout << demuoc(n) << endl;
	}
	return 0;
}



