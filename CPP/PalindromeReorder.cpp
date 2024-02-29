#include <iostream>
#include <algorithm>
#include <math.h>
#include <set>

#define ll long long
#define pii pair<int, int>
#define pll pair<long long, long long>
#define vi vector<int>
using namespace std;
int countOddElements(int f[]) {
	int cnt = 0;
	for(int i = 0; i < 26; i++) {
		cnt += f[i] % 2 == 1;
	}
	return cnt;
}
string createString(int length, char x) {
	string s(length, x);
	return s;
}
void solve(string s) {
	int f[26] = {};
	for(char x : s) f[x - 'A']++;
	int odd = countOddElements(f);
	if(odd > 1) {
		cout << "NO SOLUTION\n";
		return;
	}
	string ans = "";
	string oddstr = "";
	for(int i = 0; i < 26; i++) {
		if(f[i] % 2 == 1) {
			oddstr = createString(f[i], 'A' + i);
		}
		else {
			string x = createString(f[i] / 2, 'A' + i);
			ans = x + ans + x;
		}
	}
	ans = ans.substr(0, ans.length() / 2) + oddstr + ans.substr(ans.length() / 2);
	cout << ans << endl;
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int tc = 1;
//	cin >> tc;

	while(tc--){
		string s; cin >> s;
		solve(s);
	}
	return 0;

}

