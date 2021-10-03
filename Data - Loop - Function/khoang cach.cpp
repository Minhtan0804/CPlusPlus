#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		double x1, y1, x2, y2;
		cin >> x1 >> y1 >> x2 >> y2;
		double kc = (x1-x2)*(x1-x2) + (y1-y2)*(y1-y2);
		kc = (double) sqrt(kc);
		cout << fixed << setprecision(4) << kc;
		cout << endl;
	}
	return 0;
}





