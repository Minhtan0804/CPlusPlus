#include<bits/stdc++.h>
using namespace std;

int tang(long n){
	int sau = n % 10;
	n/= 10;
	while(n){
		int trc = n % 10;
		if (trc >= sau) return 0;
		sau = trc;
		n/=10;
	}
	return 1;
}

int giam(long n){
	int sau = n % 10;
	n/= 10;
	while(n){
		int trc = n%10;
		if (trc <= sau) return 0;
		sau = trc;
		n/=10;
	}
	return 1;
}

int snt(long n){
	if (n < 2) return 0;
	for( int i = 2; i <= sqrt(n); i++){
		if (n % i == 0) return 0;
	}
	return 1;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int dem = 0;
//		if (n == 2){
//			cout << "20" << endl;
//		}
		int a = pow(10, n-1)+1, b = pow(10, n);
		for (int i = a; i < b; i+=2){
				if (tang(i) || giam (i)){
				if (snt(i)){
					dem++;
				}
			}
		}
		cout << dem << endl;
	}
	return 0;
}



