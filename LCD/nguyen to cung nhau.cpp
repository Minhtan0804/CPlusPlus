#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
	if (b == 0){
		return a;
	}else{
		return gcd(b, a%b);
	}
}

int sngt(int n){
	if (n < 2) return 0;
	for(int i = 2; i <=sqrt(n); i++){
		if(n % i == 0) return 0;
	}
	return 1;
}
int main(){
	int t;
	cin >> t;
	int k = t;
	while(k--){
		int x;
		cin >> x;
		int dem = 0;
		for (int i = 1; i < x; i++){
			if (gcd(x, i) == 1){
			dem++;
			}
		}
		if (sngt(dem)){
			cout << 1 << endl;
		}else{
			cout << 0 << endl;	
		}
	}
	return 0;
}



