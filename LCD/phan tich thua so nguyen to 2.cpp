#include<bits/stdc++.h>
using namespace std;

void pt(long long n){
	long long m = n;
//	while(n % 2 == 0){
//		 dem++;
//		 n/= 2;
//	}
	for (int i = 2; i <= sqrt(m); i++){
		int dem = 0;
		while(n % i == 0){
			n /= i;
			dem++;
			if (n % i != 0){
				cout << i << " " << dem <<endl;
				dem = 0;
				break;
			}
		}
	}
//	for (long long i = 2; i <= m; i++){
//		if (a[i] != 0){
//			cout << i << " " << a[i] << endl;
//		}
//	}
	if (n > 2){
		cout << n << " " << 1 << endl;
	}
}
int main(){
	long long n;
	cin >> n;
	pt(n);
	return 0;
}



