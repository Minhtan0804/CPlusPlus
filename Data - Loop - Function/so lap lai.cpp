#include<bits/stdc++.h>
using namespace std;

long long gcd(long long a, long long b){
	if (b == 0){
		return a;
	}else{
		return gcd(b, a % b);
	}
}

void sll(long long a, long long x, long long y){
	long long g = gcd(x,y);
	for (int i = 0; i < g; i++){
		cout << a;
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		long long a, x, y;
		cin >> a >> x >> y;
		sll(a, x, y);
		cout << endl;
	}
	return 0;
}


