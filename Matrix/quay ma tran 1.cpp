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
	for (int i = 0; i < n; i++){
		for (int j = 0; j < m; j++){
			cout << a[i][j] << " ";
		}
//		cout << endl;
	}
}

void quay(int a[][100], int n, int m){
	int h1 = 0, h2 = n-1, c1 = 0, c2 = m-1;
	while(h1 < h2 && c1 < c2){
		int tmp1 = a[h1+1][c1];
		for (int i = c1; i < c2; i++){
			int tmp2 = a[h1][i];
			a[h1][i] = tmp1;
			tmp1 = tmp2;	
		}
		for (int i = h1; i < h2; i++){
			int tmp2 = a[i][c2];
			a[i][c2] = tmp1;
			tmp1 = tmp2;
		}
		for (int i = c2; i > c1; i--){
			int tmp2 = a[h2][i];
			a[h2][i] = tmp1;
			tmp1 = tmp2;
		}
		for (int i = h2; i > h1; i--){
			int tmp2 = a[i][c1];
			a[i][c1] = tmp1;
			tmp1 = tmp2;
		}
		h1++;
		h2--;
		c1++;
		c2--;
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
//		xuat(a,n,m);
		quay(a,n,m);
//		cout << endl;
		xuat(a,n,m);
		cout << endl;
	}
	return 0;
}





