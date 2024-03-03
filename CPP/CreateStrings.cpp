#include <iostream>
#include <algorithm>
#include <math.h>
#include <set>

#define ll long long
#define pii pair<int, int>
#define pll pair<long long, long long>
#define vi vector<int>
using namespace std;

string s;
int n, a[9], mark[9];
set <string> se;
void createString() {
	string res = "";
	for(int i = 0; i < n; i++) {
		res += s[a[i]];
	}
	se.insert(res);
}
void Try(int i) {
	for(int j = 0; j < n; j++) {
		if(!mark[j]) {
			mark[j] = 1;
			a[i] = j;
			if(i == n - 1) {
				createString();
			}
			else Try(i + 1);
			mark[j] = 0;
		}
	}
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int tc = 1;
//	cin >> tc;

	while(tc--){
		cin >> s;
		n = s.length();
		Try(0);
		cout << se.size() << endl;
		for(string x : se) {
			cout << x << endl;
		}
	}
	return 0;

}

