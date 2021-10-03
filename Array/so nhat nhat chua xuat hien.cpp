#include<bits/stdc++.h>
using namespace std;

int snn(int a[], int n){
	if (n == 0 || a[0] != 1) return 1;
	for (int i = 0; i < n; i++){
		if (a[i] > 0 && a[i]+1 < a[i+1]){
			return a[i]+1;
		}
	}
	return a[n-1]+1;
}

void sapxep(int a[], int n){
	for (int i = 0; i < n-1; i++){
			for (int j = i+1; j < n; j++){
				if (a[i] > a[j]){
					int tmp = a[i];
					a[i] = a[j];
					a[j] = tmp;
				}
			}
		}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n];
		for (int i = 0; i < n; i++){
			cin >> a[i];
			if (a[i] <= 0){
				i--;
				n--;
			}
		}
		sapxep(a,n);
		cout << snn(a, n) << endl;
	}
	return 0;
}






