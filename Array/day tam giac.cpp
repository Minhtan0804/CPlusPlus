#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		long n, max = 0;
		cin >> n;
		long a[n];
		for (long i = 0; i < n; i++){
			cin >> a[i];
			if (a[i] > max) max = a[i];
		}
		cout << max << endl;
	}
	return 0;
}





