#include<bits/stdc++.h>
using namespace std;

void nhap(long a[], long n){
	for (long i = 0; i < n; i++){
		cin >> a[i];
	}
}

long xanhat(long a[], long n){
	int max = 0, j;
	for (long i = 0; i < n; i++){
		j = i+1;
		while(n-max >= i){
			if (a[i] <= a[j] && max < j-i) max = j-i;
			j++;
			if(j == n) break;
		}
	}
	return max;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		long n;
		cin >> n;
		long a[n];
		nhap(a,n);
		cout << xanhat(a,n) << endl;
	}
	return 0;
}
