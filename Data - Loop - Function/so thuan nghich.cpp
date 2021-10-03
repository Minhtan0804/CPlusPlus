#include<iostream>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		long long n, m = 0, k = 0;
		cin >> n;
		m = n;
		while(n){
			int x = n%10;
			k = k *10 + x;
			n/=10;
		}
		if(m == k){
			cout << "YES\n";
		}else{
			cout << "NO\n";
		}
	}
	return 0;
}


