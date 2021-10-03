#include<bits/stdc++.h>
using namespace std;

void Solution(string str){
	int sum = 0;
	for (int i = 0; i < str.size(); i++){
		int sum1 = 0;
		if (str[i] > '0' && str[i] <= '9'){
			sum1 += str[i]-'0';
			while(str[i+1] >= '0' && str[i+1] <= '9'){
				sum1 = sum1*10 + str[i+1]-'0';
				i++;
			}
		}
		sum += sum1;
	}
	cout << sum;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		string str;
		getline(cin >> ws, str);
		Solution(str);
		cout << endl;
	}
	return 0;
}

