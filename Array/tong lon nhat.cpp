#include<bits/stdc++.h>
using namespace std;

void nhap(int a[], int n){
	for (int i = 0; i < n; i++){
		cin >> a[i];
	}
}

int sumMax(int a[], int b[], int n, int m){
	int sum = 0, k = 0, t = 0;
	for (int i = 0; i < n; i++){
		k += a[i];
		for (int j = i+1; j < m; j++){
			t += b[j];
		}
		if (k+t > sum) sum = k+t;
		t = 0;
	}
	return sum;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int n, m;
		cin >> n >> m;
		int a[n], b[m];
		nhap(a,n);
		nhap(b,m);
		int x = sumMax(a,b,n,m);
		int y = sumMax(b,a,m,n);
		if (x < y) x=y;
		cout << x << endl;
	}
	return 0;
}
