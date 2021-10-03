#include<iostream>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		long n;
		cin >> n;
		int check = 1;
		while(n){
			int k = n % 10;
			if (k != 6 && k != 8 && k != 0){
				cout << "NO\n";
				check = 0;
				break;
			}
			n /= 10;
		}
		if (check != 0){
			cout << "YES\n";
		}
	}
	return 0;
}


