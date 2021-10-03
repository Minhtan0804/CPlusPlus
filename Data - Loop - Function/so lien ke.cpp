#include<iostream>
#include<math.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		long long n;
		cin >> n;
		int a[20] = {0}, k = 0;
		while(n){
			a[k++] = n%10;
			n/=10;
		}
		int check = 1;
		for (int i = 0;  i < k-1; i++){
			if (abs(a[i] - a[i+1]) != 1){
				cout << "NO\n";
				check = 0;
				break;
			}
		}
		if (check == 1){
			cout << "YES\n";
		}
	}
	return 0;
}


