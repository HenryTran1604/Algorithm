#include <iostream>
#include <algorithm>
#include <math.h>
#include <set>

#define ll long long
#define pii pair<int, int>
#define pll pair<long long, long long>
#define vi vector<int>
using namespace std;
int main() {


	int tc = 1;
	while(tc--){
		int n; cin >> n;
		ll ans = 1, k = 2;
		const int MOD = 1e9 + 7;
		while(n > 0) {
			if(n & 1) {
				ans = (ans * k);
			}
			k *= k;
			n >>= 1;
		}
		cout << ans << endl;
	}
	return 0;

}

