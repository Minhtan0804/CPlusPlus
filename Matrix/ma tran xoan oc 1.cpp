#include<bits/stdc++.h>
using namespace std;

void nhap(int a[][100], int n, int m){
	for (int i = 0; i < n; i++){
		for (int j = 0; j < m; j++){
			cin >> a[i][j];
		}
	}
}

void xuat(int a[][100], int n, int m){
	int h1 = 0, h2 = n-1, c1 = 0, c2 = m-1, k = 0;
	while(h1 <= h2 && c1 <= c1){
		for (int i = c1; i <= c2; i++){
			cout << a[h1][i] << " ";
		}
		h1++;
		for (int i = h1; i <= h2; i++){
			cout << a[i][c2] << " ";
		}
		c2--;
		for (int i = c2; i > c1; i--){
			cout << a[h2][i] << " ";
		}
		for (int i = h2; i > h1; i--){
			cout << a[i][c1] << " ";
		}
		h2--;
		c1++;
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, m;
		cin >> n >> m;
		int a[100][100];
		nhap(a,n,m);
		xuat(a,n,m);
		cout << endl;
	}
	return 0;
}





