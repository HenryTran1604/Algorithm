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
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int tc = 1;
//	cin >> tc;

	while(tc--){
		int n; cin >> n;
		for(int i = 1; i <= n; i++) {
			ll ans = 1ll*i*i*(i*i - 1)/2 - 4ll * (i- 1) * (i - 2);
			cout << ans << endl;
		}
	}
	return 0;

}
// Author: Tran Quang Huy

