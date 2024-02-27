#include <iostream>
#include <algorithm>
#include <math.h>
#include <set>

#define ll long long
#define pii pair<int, int>
#define pll pair<long long, long long>
#define vi vector<int>
using namespace std;
const int MOD = 1e9 + 7;
ll powerMod(int n, int k) {
	if(k == 0) return 1;
	ll tmp = powerMod(n, k / 2);
	if(k % 2 == 0) return tmp * tmp % MOD;
	return n * (tmp * tmp % MOD) % MOD;
}
int main() {
	#ifndef ONLINE_JUDGE
//	freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
	#endif

	int tc = 1;
	cin >> tc;

	while(tc--){
		int a, b, c; cin >> a >> b >> c;
		cout << powerMod(powerMod(a, b), c) % MOD << endl;
	}
	return 0;

}

