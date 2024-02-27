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
	#ifndef ONLINE_JUDGE
//	freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
	#endif

	int tc = 1;

	while(tc--){
		int n; cin >> n;
		if(n % 4 != 0 && (n + 1) % 4 != 0) {
			cout << "NO\n";
		}
		else {
			long long sum_set = 1ll * n * (n + 1) / 4;
			int f[n + 1] = {};
			long long tmp = n, tmp_sum = sum_set, len = 0;
			while(tmp_sum > 0) {
				if(tmp_sum >= tmp) {
					f[tmp] = 1;
					len++;
					tmp_sum -= tmp;
					tmp--;
				}
				else {
					tmp--;
				}
				
			}
			cout << "YES\n";
			cout << len << endl;
			for(int i = 1; i <= n; i++) {
				if(f[i])
					cout << i << " ";
			}
			cout << endl;
			cout << n - len << endl;
			for(int i = 1; i <= n; i++) {
				if(!f[i])
					cout << i << " ";
			}
		}
	}
	return 0;

}

