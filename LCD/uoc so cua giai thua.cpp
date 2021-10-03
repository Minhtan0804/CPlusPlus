#include<bits/stdc++.h>
using namespace std;



int main(){
	int t;
	cin >> t;
	while(t--){
		int n, p;
		cin >> n >> p;
		int dem = 0;
		for (int i = 1; i <= n; i++){
			int k = i;
			while(k % p == 0){
				dem++;
				k/=p;
			}
		}
		cout << dem << endl;
	}
	return 0;
}



