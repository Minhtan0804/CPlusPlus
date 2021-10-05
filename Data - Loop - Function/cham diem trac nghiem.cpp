#include<bits/stdc++.h>
using namespace std;

double Compare(string str1, string str2){
	int count = 0;
	for (int i = 1; i < str1.size(); i+=2){
		if (str1[i] == str2[i]){
			count++;
		}
	}
	return count;

}

int main(){
	string str1 = " A B B A D C C A B D C C A B D";
	string str2 = " A C C A B C D D B B C D D B B";
	int t;
	cin >> t;
	while(t--){
		int ma;
		cin >> ma;
		string str;
		getline(cin, str);
		double point = 0;
		if (ma == 101){
			point = Compare(str1, str) * 10 /15;
		}else if (ma == 102){
			point = Compare(str2, str) * 10 /15;
		}
		cout << setprecision(2) << fixed << point;
		cout << endl;
	}
	return 0;
}

