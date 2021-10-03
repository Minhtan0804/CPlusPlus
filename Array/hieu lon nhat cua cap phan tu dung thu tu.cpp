#include<bits/stdc++.h>
using namespace std;

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
		int check = 0, max = 0;
		for (int i = 0; i < n-1; i++){
			for (int j = i+1; j < n; j++){
				if (a[i] < a[j]){
					check = 1;
					if (max < a[j] - a[i]) max = a[j] - a[i];
				}
			}
		}
		if (check == 1){
			cout << max;
		}else{
			cout << "-1";
		}
		cout << endl;
	}
	return 0;
}





