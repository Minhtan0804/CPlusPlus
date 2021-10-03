#include<iostream>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		long a;
		cin >> a;
		int sum = 99;
		while(sum > 9){
			sum = 0;
			while(a){
				sum += a % 10;
				a /= 10;
			}
			a = sum;
		}
		cout << sum << endl;
	}
	return 0;
}

