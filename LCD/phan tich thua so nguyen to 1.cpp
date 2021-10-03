#include<bits/stdc++.h>
using namespace std;

void pt(int n){
	int a[100000] = {0};
	int k = 0, m = n;
	while(n % 2 == 0){
		 a[2]++;
		 n/= 2;
	}
	for (int i = 3; i <= sqrt(m); i+=2){
		while(n % i == 0){
			n /= i;
			a[i]++;
		}
	}
	if (n > 2){
		a[n]++;
	}
	for (int i = 2; i <= m; i++){
		if (a[i] != 0){
			cout << i << " " << a[i] << " ";
		}
	}
	cout << endl;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		pt(n);
	}
	return 0;
}



