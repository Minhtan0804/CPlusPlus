#include<bits/stdc++.h>
using namespace std;

int gcd(long a, long b){
	if (b == 0){
		return a;
	}else{
		return gcd(b, a%b);
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		long a, b;
		cin >> a >> b;
		long long lcm = a*b /gcd(a,b);
		cout << lcm << " " << gcd(a,b )<< endl;
	}
	return 0;
}



