#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
	if (b == 0){
		return a;
	}else{
		return gcd(b, a%b);
	}
}

int tinh(int m, int n, int x){
	int a = m/x, b = n/x;
	if (m % x == 0){
		return b-a+1;
	}
	return b-a;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int m , n, a, b;
		cin >> m >> n >> a >> b;
		int dem = 0;
		long long lcm = a*b / gcd(a, b);
		dem += tinh(m, n, a);
		dem += tinh(m, n, b);
		dem -= tinh(m, n, lcm);
		cout << dem << endl;
	}
	return 0;
}



