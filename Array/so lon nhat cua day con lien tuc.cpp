#include<bits/stdc++.h>
using namespace std;

void nhap(long a[], long n){
	for (long i = 0; i < n; i++){
		cin >> a[i];
	}
}

long findKMax(long a[], long m, long b){
	int max = 0;
	for (int i = m; i < b; i++){
		if (a[i] > max){
			max = a[i];
		}
	}
	return max;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		long n, k;
		cin >> n >> k;
		long a[n];
		nhap(a,n);
		long max = findKMax(a,0,k);
		cout << max << " ";
		long j = 0;
		for (int i = k; i < n; i++){
			if (max != a[j]){
				if (max < a[i]){
					max = a[i];
				}
				cout << max << " ";
			}else{
				max = findKMax(a,i-k+1,i+1);
				cout << max << " ";
			}
			j++;
		}
		cout << endl;
	}
	return 0;
}




