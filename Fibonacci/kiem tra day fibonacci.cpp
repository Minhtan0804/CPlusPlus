#include<bits/stdc++.h>
using namespace std;

long long fib(int n)
{
	if (n <= 1)
		return n;
	return fib(n-1) + fib(n-2);
}

int main(){
	int t;
	cin >> t;
	while(t--){
		long long n;
		cin >> n;
		int k = 1;
		for (int i = 0; i < 100; i++){
			if (n == fib(i)){
				cout << "YES";
			}
			if (n > fib(i)){
				cout << "NO";
				break;
			}
		}
		cout << endl;
	}
	return 0;
}





