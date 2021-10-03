#include<bits/stdc++.h>
using namespace std;

void kcnn(int a[], int n){
	int min = abs(a[0] - a[1]);
	for (int i = 0; i < n-1; i++){
		for(int j = i+1; j < n; j++){	
			if (abs(a[i] - a[j]) < min){
				min = abs(a[i] - a[j]);
			}
		}
	}
	cout << min;
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
		}
		kcnn(a, n);
		cout << endl;
	}
	return 0;
}





