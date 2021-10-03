#include<iostream>
#include<math.h>
using namespace std;

int canbang(int n){
	int chan =0, le = 0;
	int dem = 0;
	while(n){
		int k = n % 10;
		if (k % 2 != 0){
			le++;
		}else{
			chan++;
		}
		dem++;
		n/=10;
	}
	if (dem % 2 != 0){
		return 0;
	}else{
		if (chan == le){
			return 1;
		}else{
			return 0;
		}
	}
}

int main(){
	int t;
	cin >> t;
	int a = pow (10,t-1), b = pow(10,t);
	int dem = 0;
	for(int i = a; i < b; i++){
		if (canbang(i)){
			cout << i << " ";
			dem ++;
			if (dem == 10){
				dem = 0;
				cout << endl;
			}
		}
	}
	return 0;
}


