#include<bits/stdc++.h>
using namespace std;

void nhap(int a[][105], int n, int m){
	for (int i = 1; i <= n; i++){
			for (int j = 1; j <= m; j++){
				cin >> a[i][j];
		}
	}
}

void bdnp(int a[][105], int b[], int c[], int n, int m){
	for (int i = 1; i <= n; i++){
		for (int j = 1; j <= m; j++){
			if(a[i][j] == 1){
				b[i] = 1;
				c[j] = 1;
			}
		}
	}
	for (int i = 1; i <= n; i++){
		for (int j = 1; j <= m; j++){
			if(b[i] == 1 || c[j] == 1){
				a[i][j] = 1;
			}
		}
	}
}

void xuat(int a[][105], int n, int m){
	for (int i = 1; i <= n; i++){
		for (int j = 1; j <= m; j++){
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, m;
		cin >> n >> m;
		int a[105][105], b[105] = {0}, c[105] = {0};
		nhap(a,n,m);
		bdnp(a,b,c,n,m);
		xuat(a,n,m);
	}
	return 0;
}
