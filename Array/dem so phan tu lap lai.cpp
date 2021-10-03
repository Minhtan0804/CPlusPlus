#include<bits/stdc++.h>
using namespace std;

void demlap(int b[], int n){
	int dem = 0;
	for (int i = 0; i < 100000; i++){
		if (b[i] > 1){
			dem += b[i];	
		}
	}
	cout << dem;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n];
		int b[100000] = {0};
		for (int i = 0; i < n; i++){
			cin >> a[i];
			b[a[i]]++;
		}
		demlap(b, n);
		cout << endl;
	}
	return 0;
}
