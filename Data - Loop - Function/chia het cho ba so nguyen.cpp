#include<bits/stdc++.h>
using namespace std;

int gcd(int x, int y){
	if (y == 0){
		return x;
	}else{
		return gcd(y, x % y);
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int x, y, z, n;
		cin >> x >> y >> z  >> n;
		long long k = gcd(x, y);
		long long lcm = x*y / k;
		k = gcd(lcm,z);
		lcm = lcm * z / k;
		if (lcm > pow(10,n)){
			cout << "-1" <<endl;
			continue;
		}
		k = pow(10, n-1) / lcm;
		if (k * lcm >= pow(10,n-1)){
			cout << k*lcm << endl;
		}else{
			cout << k*lcm + lcm<< endl;
		}
	}
	return 0;
}



