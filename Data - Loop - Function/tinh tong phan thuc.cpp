#include<bits/stdc++.h>
using namespace std;

void tong(int n){
	double sum = 0;
	for (int i = 1; i <= n; i++){
		sum += (double)1 / i;
	}
	cout << fixed << setprecision(4) << sum;
}

int main(){
	int n;
	cin >> n;
	tong(n);
	cout << endl;
	return 0;
}





