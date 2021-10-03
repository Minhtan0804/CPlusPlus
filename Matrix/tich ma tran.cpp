#include<bits/stdc++.h>
using namespace std;

void nhapmatran(int a[][100], int n, int m){
	for (int i = 0; i < n; i++){
		for (int j = 0; j < m ; j++){
			cin >> a[i][j];
		}
	}
}

void xuatmatran(int a[][100], int n, int m){
	for (int i = 0; i < n; i++){
		for (int j = 0; j < m ; j++){
			cout << a[i][j];
		}
		cout << endl;
	}
}

int main(){
	int n, m, p;
	cin >> n >> m >> p;
	int a[n][m], b[m][p], c[100][100] = {0};
//	nhapmatran(a, n, m);
//	nhapmatran(b, m, p);
	for (int i = 0; i < n; i++){
		for (int j = 0; j < m ; j++){
			cin >> a[i][j];
		}
	}
	for (int i = 0; i < m; i++){
		for (int j = 0; j < p ; j++){
			cin >> b[i][j];
		}
	}
	for (int i = 0; i < n; i++){
		for (int j = 0; j < p; j++){
			for (int k = 0; k < m; k++){
				c[i][j] += a[i][k] * b[k][j];
			}
		}
	}
//	xuatmatran(c, n, p);
	for (int i = 0; i < n; i++){
		for (int j = 0; j < p ; j++){
			cout << c[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}
