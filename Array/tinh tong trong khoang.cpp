#include<bits/stdc++.h>
using namespace std;

void tong(int a[], int l, int r){
	int sum = 0;
	for (int i = l-1; i < r; i++){
		sum += a[i];
	}
	cout << sum << endl;
}
//	1
//	9  3
//	1  1  2  1  3  4  5  2  8
//	1 5
//	
//	2 4
//	
//	3 5

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, Q;
		cin >> n >> Q;
		int a[n];
		for (int i = 0; i < n; i++){
			cin >> a[i];
		}
		int b[Q][2];
		for (int i = 0; i < Q; i++){
			for (int j = 0; j < 2; j++){
				cin >> b[i][j];
			}
		}
		for (int i = 0; i < Q; i++){
			tong(a, b[i][0], b[i][1]);
		}
	//	cout << endl;
	}
	return 0;
}





