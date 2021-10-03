#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, k;
		cin >> n >> k;
		int a[n][n];
		int b[100000], x = 0;
		for (int i = 0; i < n; i++){
			for (int j = 0; j < n; j++){
				cin >> a[i][j];
				b[x++] = a[i][j];
			}
		}
		for (int i = 0; i < x-1; i++){
			for (int j = i+1; j < x; j++){
				if (b[i] > b[j]){
					int tmp = b[i];
					b[i] = b[j];
					b[j] = tmp;
				}
			}
		}
		for (int i = 0; i < x; i++){
			cout << b[i] << " ";
		}
		cout << b[k-1] << endl;
	}
	return 0;
}





