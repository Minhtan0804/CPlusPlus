#include<iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	long long sum = 0, k = 1;
	for (int i = 1; i <= n; i++){
		k *= i;
		sum += k;
	}
	cout << sum;
	return 0;
}


