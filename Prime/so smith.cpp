#include<bits/stdc++.h>
using namespace std;

int notsnt(int n){
	if (n < 2) return 1;
	for (int i = 2; i <= sqrt(n); i++){
		if( n % i == 0) return 1;
	}
	return 0;
}

int tongcs(int n){
	int sum = 0;
	while(n){
		sum += n%10;
		n/=10;
	}
	return sum;
}

int tonguoc(int n){
	int sum = 0;
	for(int i = 2; i <= sqrt(n); i++){
		while(n % i == 0){
			sum += tongcs(i);
			n /= i;
		}
	}
	if (n > 2) {
		sum += tongcs(n);
	}
	return sum;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		if(tonguoc(n) == tongcs(n) && notsnt(n)){
			cout << "YES" << endl;
		}else{
			cout << "NO" << endl;
		}
	}
	return 0;
}




