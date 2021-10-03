#include<iostream>
#include<math.h>>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		long long n;
		cin >> n;
		long long res = 0, k = 0;
		while(n){
			if(n % 1000 == 84 && n > 1000){
				n /= 1000;
				res = res + n * pow(10, k);
				break;10
			}
			int m = n% 10;
			res += m *pow(10, k);
			n /= 10;
			k++;
		}
		cout << res << endl;
	}
	return 0;
}


