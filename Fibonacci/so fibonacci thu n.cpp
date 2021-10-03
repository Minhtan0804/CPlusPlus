#include<bits/stdc++.h>
using namespace std;

long long arr[100] = {0};

void fibo(){
	arr[1] = 1;
	arr[2] = 1;
	for (int i = 3; i <= 92; i++){
		arr[i] = arr[i-1] + arr[i-2];
	}
}
int main(){
	fibo();
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		cout << arr[n] << endl;
	}
	return 0;
}




