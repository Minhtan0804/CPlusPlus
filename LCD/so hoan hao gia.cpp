#include<bits/stdc++.h>
using namespace std;

int shh(long long n){
	if (n == 6 || n == 28 || n == 496 || n == 8128 || n == 33550336 || n == 8589869056 || n == 137438691328 || n == 2305843008139952128){
		return 1;
	}else{
		return 0;
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		long long n;
		cin >> n;
		cout << shh(n) << endl;
	}
	return 0;
}



